package com.alemolina.tasks.data.di

import com.alemolina.tasks.data.repository.TaskRepository
import com.alemolina.tasks.presentation.TaskViewModel
import org.koin.dsl.module

val appModule = module {
    single { TaskRepository() }
    factory { TaskViewModel(get()) }
}