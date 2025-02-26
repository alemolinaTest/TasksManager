package com.alemolina.tasks.data.di


import org.koin.core.module.dsl.singleOf
import org.koin.dsl.module
import com.alemolina.tasks.presentation.TaskViewModel

actual val viewModelModule = module {
    singleOf(::TaskViewModel)
}