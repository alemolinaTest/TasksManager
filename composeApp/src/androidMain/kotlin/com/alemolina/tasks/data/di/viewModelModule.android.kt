package com.alemolina.tasks.data.di


import com.alemolina.tasks.presentation.TaskViewModel
import org.koin.core.module.dsl.viewModel
import org.koin.dsl.module

actual val viewModelModule = module {
    viewModel { TaskViewModel(get(), get(), get(), get(), get(), get()) }
}
