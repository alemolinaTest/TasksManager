package com.alemolina.tasks.presentation

import androidx.lifecycle.ViewModel
import com.alemolina.tasks.domain.iteractor.AddTaskUseCase
import com.alemolina.tasks.domain.iteractor.GetTaskByIdUseCase
import com.alemolina.tasks.domain.iteractor.GetTasksUseCase
import com.alemolina.tasks.domain.iteractor.RemoveTaskUseCase
import com.alemolina.tasks.domain.iteractor.ToggleTaskUseCase
import com.alemolina.tasks.domain.model.DomainTask
import com.alemolina.tasks.location.LocationProvider
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.SupervisorJob
import kotlinx.coroutines.delay
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.collectLatest
import kotlinx.coroutines.launch

class TaskViewModel(
    private val getTasksUseCase: GetTasksUseCase,
    private val addTaskUseCase: AddTaskUseCase,
    private val removeTaskUseCase: RemoveTaskUseCase,
    private val toggleTaskUseCase: ToggleTaskUseCase,
    private val getTaskByIdUseCase: GetTaskByIdUseCase,
    private val locationProvider: LocationProvider,
) : ViewModel() {
    private val viewModelScope = CoroutineScope(SupervisorJob() + Dispatchers.Main)
    private val _isLoading = MutableStateFlow(false)
    val isLoading: StateFlow<Boolean> = _isLoading

    private val _tasks = MutableStateFlow<List<DomainTask>>(emptyList())
    val tasks: StateFlow<List<DomainTask>> = _tasks
    private val _task = MutableStateFlow<DomainTask?>(null)
    val task: StateFlow<DomainTask?> = _task

    init {
        observeTasks()
    }

    private suspend fun changeLoadingState(isLoading: Boolean) {
        if (isLoading) delay(1000)
        _isLoading.value = isLoading
    }

    private fun observeTasks() {
        viewModelScope.launch {
            getTasksUseCase().collectLatest { _tasks.value = it }
            changeLoadingState(false)
        }
    }

    fun addTask(title: String, description: String) {
        viewModelScope.launch {
            val location = getLocationOrMock()

            addTaskUseCase(
                title = title,
                description = description,
                latitude = location?.first.toString(),
                longitude = location?.second.toString(),
            )
        }
    }

    private suspend fun getLocationOrMock(): Pair<Double, Double> {

        val location = locationProvider.getCurrentLocation()
        return if (location != null) {
            Pair(location.latitude, location.longitude)
        } else {
            Pair(0.0, 0.0) // Mocked location
        }
    }

    fun removeTask(id: Int) {

        viewModelScope.launch {
            changeLoadingState(true)
            removeTaskUseCase(id)
            changeLoadingState(false)
        }

    }

    fun toggleTask(id: Int) {
        viewModelScope.launch { toggleTaskUseCase(id) }
    }

    fun getTaskById(taskId: Int) {
        viewModelScope.launch {
            _task.value = getTaskByIdUseCase.invoke(taskId = taskId)
        }
    }

}