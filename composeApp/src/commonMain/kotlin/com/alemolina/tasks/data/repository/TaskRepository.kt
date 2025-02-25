package com.alemolina.tasks.data.repository

import com.alemolina.tasks.domain.model.DomainTask
import com.benasher44.uuid.uuid4
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.coroutines.flow.update

class TaskRepository {
    private val _tasks = MutableStateFlow<List<DomainTask>>(emptyList())
    val tasks = _tasks.asStateFlow() // Public read-only access

    fun addTask(title: String, description: String, isCompleted: Boolean = false) {
        val newTask = DomainTask(
            id = generateTaskId(),
            title = title,
            description = description,
            isCompleted = isCompleted
        )
        _tasks.update { it + newTask } // Atomic update
    }

    fun removeTask(id: String) {
        _tasks.update { tasks -> tasks.filter { it.id != id } }
    }

    fun toggleTask(id: String) {
        _tasks.update { tasks ->
            tasks.map { task ->
                if (task.id == id) task.copy(isCompleted = !task.isCompleted) else task
            }
        }
    }

    fun getTaskById(id: String): DomainTask? {
        return _tasks.value.find { it.id == id }
    }

    private fun generateTaskId(): String = uuid4().toString()

    fun getAllTasks(): List<DomainTask> = _tasks.value
}
