package com.alemolina.tasks.presentation

import com.alemolina.tasks.domain.iteractor.*
import com.alemolina.tasks.location.LocationProvider
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject
import kotlin.experimental.ExperimentalObjCName

@OptIn(ExperimentalObjCName::class)
@ObjCName("TaskViewModelFactory") // 👈 Expone esta clase a Swift
class TaskViewModelFactory : KoinComponent {
    private val taskViewModel: TaskViewModel by inject() // 👈 Obtiene TaskViewModel de Koin

    fun create(): TaskViewModel {
        return taskViewModel
    }
}
