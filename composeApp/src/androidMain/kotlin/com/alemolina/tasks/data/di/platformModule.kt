package com.alemolina.tasks.data.di

import android.content.Context
import com.alemolina.tasks.location.LocationProvider
import com.alemolina.tasks.platform.DatabaseDriverFactory
import org.koin.android.ext.koin.androidContext
import org.koin.core.module.Module
import org.koin.dsl.module

actual fun platformModule(): Module = module {
    single { DatabaseDriverFactory(get<Context>()) } // Ensure Context is injected
    single { LocationProvider(get<Context>()) } // Inject Context for LocationProvider
}