package com.alemolina.tasks.data.di


import com.alemolina.tasks.presentation.TaskViewModel
import org.koin.dsl.module

actual val viewModelModule = module {
    single { TaskViewModel(get(), get(), get(), get(), get(), get()) } // 👈 Aquí debe estar registrado
}