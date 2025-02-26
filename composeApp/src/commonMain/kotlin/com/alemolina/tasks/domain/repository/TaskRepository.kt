package com.alemolina.tasks.domain.repository

import com.alemolina.tasks.domain.model.DomainTask
import kotlinx.coroutines.flow.Flow

interface TaskRepository {
    suspend fun addTask(title: String, description: String)
    suspend fun deleteTask(id: Int)
    suspend fun completeTask(taskId: Int)
    fun getAllTasks(): Flow<List<DomainTask>>
    suspend fun getTaskById(id: Int): DomainTask?
}