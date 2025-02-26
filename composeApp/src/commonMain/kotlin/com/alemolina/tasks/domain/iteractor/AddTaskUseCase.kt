package com.alemolina.tasks.domain.iteractor

import com.alemolina.tasks.domain.repository.TaskRepository

class AddTaskUseCase(private val repository: TaskRepository) {
    suspend operator fun invoke(title: String, description: String) {
        repository.addTask(title,description)
    }
}