package com.alemolina.tasks.presentation.providers

import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.SupervisorJob

fun createViewModelScope(): CoroutineScope {
    return CoroutineScope(SupervisorJob() + Dispatchers.Main)
}
