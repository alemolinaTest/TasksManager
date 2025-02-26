package com.alemolina.tasks.data.di

import com.alemolina.tasks.data.adapter.idAdapter
import com.alemolina.tasks.data.repository.TaskRepositoryImpl
import com.alemolina.tasks.database.TaskEntity
import com.alemolina.tasks.database.TasksDatabase
import com.alemolina.tasks.domain.iteractor.AddTaskUseCase
import com.alemolina.tasks.domain.iteractor.GetTaskByIdUseCase
import com.alemolina.tasks.domain.iteractor.GetTasksUseCase
import com.alemolina.tasks.domain.iteractor.RemoveTaskUseCase
import com.alemolina.tasks.domain.iteractor.ToggleTaskUseCase
import com.alemolina.tasks.domain.repository.TaskRepository
import com.alemolina.tasks.platform.DatabaseDriverFactory
import com.alemolina.tasks.presentation.TaskViewModel
import org.koin.core.module.Module
import org.koin.dsl.module

fun commonModule() = module {

    /**
     * Database
     */
    single<TasksDatabase> {
        TasksDatabase(
            driver = get<DatabaseDriverFactory>().createDriver(),
            taskEntityAdapter = TaskEntity.Adapter(
                idAdapter = idAdapter ),
        )
    }

    single { get<TasksDatabase>().taskQueries }

    // Provide Repository
    single<TaskRepository> {
        TaskRepositoryImpl(
            database = get(),
        )
    }


    // Provide Use Cases
    factory { GetTasksUseCase(get()) }
    factory { AddTaskUseCase(get()) }
    factory { RemoveTaskUseCase(get()) }
    factory { ToggleTaskUseCase(get()) }
    factory { GetTaskByIdUseCase(get()) }

    // Provide ViewModel
    factory {
        TaskViewModel(
            getTasksUseCase = get(),
            addTaskUseCase = get(),
            removeTaskUseCase = get(),
            toggleTaskUseCase = get(),
            getTaskByIdUseCase = get()
        )
    }
}

expect fun platformModule(): Module