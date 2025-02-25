package com.alemolina.tasks.presentation


import com.alemolina.tasks.data.repository.TaskRepository
import com.alemolina.tasks.domain.model.DomainTask
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.SupervisorJob
import kotlinx.coroutines.delay
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.launch

class TaskViewModel(private val repository: TaskRepository) {
    private val viewModelScope = CoroutineScope(SupervisorJob() + Dispatchers.Main)
    private val _isLoading = MutableStateFlow(true)
    val isLoading: StateFlow<Boolean> = _isLoading

    private val _tasks = MutableStateFlow<List<DomainTask>>(emptyList())
    val tasks: StateFlow<List<DomainTask>> = _tasks

    init {
        _isLoading.value = true
        loadTasks()
    }

    private fun loadTasks() {
        viewModelScope.launch {
            _tasks.value = repository.getAllTasks()
            _isLoading.value = false
        }
    }

    fun addTask(title: String, description: String) {
        viewModelScope.launch {
            repository.addTask(title = title, description = description)
            _tasks.value = repository.getAllTasks()
        }
    }

    fun removeTask(id: String) {
        viewModelScope.launch {
            repository.removeTask(id)
            _tasks.value = repository.getAllTasks()
        }
    }

    fun toggleTask(id: String) {
        viewModelScope.launch {
            repository.toggleTask(id)
            _tasks.value = repository.getAllTasks()
        }
    }

    fun getTaskById(id: String): DomainTask? = tasks.value.find { it.id == id }

}