package com.alemolina.tasks.domain.iteractor

import com.alemolina.tasks.domain.repository.TaskRepository

class RemoveTaskUseCase(private val repository: TaskRepository) {
    suspend operator fun invoke(id: Int) {
        repository.deleteTask(id)
    }
}