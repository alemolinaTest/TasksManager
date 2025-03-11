package com.alemolina.tasks.data.di

import com.alemolina.tasks.data.adapter.idAdapter
import com.alemolina.tasks.data.repository.TaskRepositoryImpl
import com.alemolina.tasks.database.TaskEntity
import com.alemolina.tasks.database.TasksDatabase
import com.alemolina.tasks.domain.iteractor.*
import com.alemolina.tasks.domain.repository.TaskRepository
import com.alemolina.tasks.platform.DatabaseDriverFactory
import com.alemolina.tasks.presentation.TaskViewModel
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
    factory { GetTasksUseCase(get()) }
    factory { AddTaskUseCase(get()) }
    factory { RemoveTaskUseCase(get()) }
    factory { ToggleTaskUseCase(get()) }
    factory { GetTaskByIdUseCase(get()) }

    // Provide ViewModel (Android only)
    factory {
        TaskViewModel(
            getTasksUseCase = get(),
            addTaskUseCase = get(),
            removeTaskUseCase = get(),
            toggleTaskUseCase = get(),
            getTaskByIdUseCase = get(),
            locationProvider = get()
        )
    }
}
