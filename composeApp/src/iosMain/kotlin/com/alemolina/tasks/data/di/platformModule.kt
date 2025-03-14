package com.alemolina.tasks.data.di

import com.alemolina.tasks.location.LocationProvider
import com.alemolina.tasks.platform.DatabaseDriverFactory
import org.koin.core.module.Module
import org.koin.dsl.module

actual fun platformModule(): Module = module {
    single { DatabaseDriverFactory() }
    single { LocationProvider() } // No Context needed on iOS
}