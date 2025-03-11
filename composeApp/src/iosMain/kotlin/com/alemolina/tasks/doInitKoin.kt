package com.alemolina.tasks

import com.alemolina.tasks.data.di.commonModule
import com.alemolina.tasks.data.di.platformModule
import com.alemolina.tasks.data.di.viewModelModule
import org.koin.core.context.startKoin
import kotlin.experimental.ExperimentalObjCName

@OptIn(ExperimentalObjCName::class)
@ObjCName("doInitKoin") // ✅ Explicitly expose this function to Swift
fun doInitKoin() {
    println("🚀 Iniciando Koin en iOS...")
    try {
        startKoin {
            modules(commonModule(), platformModule(), viewModelModule)
        }
        println("✅ Koin se inicializó correctamente")
    } catch (e: Exception) {
        println(" ERROR al iniciar Koin: ${e.message}")
    }
}
