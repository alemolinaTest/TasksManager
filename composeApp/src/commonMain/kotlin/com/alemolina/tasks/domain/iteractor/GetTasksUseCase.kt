package com.alemolina.tasks.domain.iteractor

import com.alemolina.tasks.domain.model.DomainTask
import com.alemolina.tasks.domain.repository.TaskRepository
import kotlinx.coroutines.flow.Flow

class GetTasksUseCase(private val repository: TaskRepository) {
    operator fun invoke(): Flow<List<DomainTask>> = repository.getAllTasks()
}