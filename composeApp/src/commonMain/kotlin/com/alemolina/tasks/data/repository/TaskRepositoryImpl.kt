package com.alemolina.tasks.data.repository

import app.cash.sqldelight.coroutines.asFlow
import app.cash.sqldelight.coroutines.mapToList
import app.cash.sqldelight.coroutines.mapToOneOrNull
import com.alemolina.tasks.database.TasksDatabase
import com.alemolina.tasks.domain.model.DomainTask
import com.alemolina.tasks.domain.model.toDomain
import com.alemolina.tasks.domain.model.toTaskEntity
import com.alemolina.tasks.domain.repository.TaskRepository
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.IO
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.firstOrNull
import kotlinx.coroutines.flow.map

class TaskRepositoryImpl(database: TasksDatabase) : TaskRepository {

    private val dbQuery = database.taskQueries

    override suspend fun addTask(
        title: String,
        description: String,
        latitude: String,
        longitude: String
    ) {
        DomainTask(
            id = 0,
            titulo = title,
            description = description,
            latitude = latitude,
            longitude = longitude,
            isCompleted = false,
        ).toTaskEntity().let {
            dbQuery.insertTask(
                titulo = it.titulo,
                description = it.description,
                latitude = latitude,
                longitude = longitude,
                isCompleted = it.isCompleted
            )
        }
    }

    override suspend fun deleteTask(id: Int) {
        dbQuery.deleteTaskById(id)
    }

    override suspend fun completeTask(taskId: Int) {
        dbQuery.updateTaskCompleteStatus(id = taskId)
    }

    override fun getAllTasks(): Flow<List<DomainTask>> {
        return dbQuery
            .getAllTasks()
            .asFlow()
            .mapToList(Dispatchers.IO)
            .map { tasks ->
                tasks.map {
                    it.toDomain()
                }
            }
    }

    override suspend fun getTaskById(id: Int): DomainTask? {
        return dbQuery
            .getTaskById(id)
            .asFlow()
            .mapToOneOrNull(Dispatchers.IO)
            .map { taskEntity ->
                taskEntity?.toDomain()
            }
            .firstOrNull()
    }
}
