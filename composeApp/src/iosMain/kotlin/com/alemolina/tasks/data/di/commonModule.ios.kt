package com.alemolina.tasks.data.di

import com.alemolina.tasks.data.adapter.idAdapter
import com.alemolina.tasks.data.repository.TaskRepositoryImpl
import com.alemolina.tasks.database.TaskEntity
import com.alemolina.tasks.database.TasksDatabase
import com.alemolina.tasks.domain.iteractor.*
import com.alemolina.tasks.domain.repository.TaskRepository
import com.alemolina.tasks.platform.DatabaseDriverFactory
import org.koin.dsl.module

actual fun commonModule() = module {

    single<TasksDatabase> {
        TasksDatabase(
            driver = get<DatabaseDriverFactory>().createDriver(),
            TaskEntityAdapter = TaskEntity.Adapter(idAdapter = idAdapter),
        )
    }

    single { get<TasksDatabase>().taskQueries }

    // Provide Repository
    single<TaskRepository> {
        TaskRepositoryImpl(database = get())
    }

    // Provide Use Cases
    single { GetTasksUseCase(get()) }
    single { AddTaskUseCase(get()) }
    single { RemoveTaskUseCase(get()) }
    single { ToggleTaskUseCase(get()) }
    single { GetTaskByIdUseCase(get()) }
}
