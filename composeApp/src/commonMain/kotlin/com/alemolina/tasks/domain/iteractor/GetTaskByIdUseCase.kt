package com.alemolina.tasks.domain.iteractor

import com.alemolina.tasks.domain.model.DomainTask
import com.alemolina.tasks.domain.repository.TaskRepository

class GetTaskByIdUseCase(private val repository: TaskRepository) {
    suspend operator fun invoke(taskId:Int): DomainTask? = repository.getTaskById(taskId)
}