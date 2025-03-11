package com.alemolina.tasks.data.di

import org.koin.core.Koin
import org.koin.core.context.startKoin
import org.koin.dsl.KoinAppDeclaration

class KoinInit {
    fun init(appDeclaration: KoinAppDeclaration = {}): Koin {
        return startKoin {
            modules(
                listOf(
                    platformModule(),  // Ensure platform-specific dependencies (Android/iOS)
                    commonModule(),    // Common dependencies
                    viewModelModule    // ViewModel dependencies
                )
            )
            appDeclaration()
        }.koin
    }
}
