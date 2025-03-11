package com.alemolina.tasks

import com.alemolina.tasks.data.di.commonModule
import com.alemolina.tasks.data.di.platformModule
import com.alemolina.tasks.data.di.viewModelModule
import org.koin.core.context.startKoin

fun initKoin() {
    startKoin {
        modules(commonModule(), platformModule(), viewModelModule)
    }
}
