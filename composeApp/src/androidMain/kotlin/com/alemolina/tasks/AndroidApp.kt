package com.alemolina.tasks

import android.app.Application
import com.alemolina.tasks.data.di.KoinInit
import org.koin.android.ext.koin.androidContext
import org.koin.android.ext.koin.androidLogger
import org.koin.core.logger.Level

class AndroidApp : Application() {
    override fun onCreate() {
        super.onCreate()
        KoinInit().init {
            androidLogger(level = Level.ERROR )
            androidContext(androidContext = this@AndroidApp)
        }
    }
}
