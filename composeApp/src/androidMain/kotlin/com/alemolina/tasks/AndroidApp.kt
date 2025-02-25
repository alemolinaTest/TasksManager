package com.alemolina.tasks

import android.app.Application
import com.alemolina.tasks.data.di.appModule
import org.koin.core.context.startKoin

class AndroidApp : Application() {
    override fun onCreate() {
        super.onCreate()
        startKoin {
            modules(appModule)
        }
    }
}
