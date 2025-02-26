package com.alemolina.tasks.domain.model

import com.alemolina.tasks.database.TaskEntity

data class DomainTask(
    val id: Int,
    val titulo: String,
    val description: String?,
    val isCompleted: Boolean
)
// Extension function to convert database entity to domain model
fun TaskEntity.toDomain(): DomainTask {
    return DomainTask(
        id = this.id,
        titulo = this.titulo,
        description = this.description,
        isCompleted = this.isCompleted
    )
}

fun DomainTask.toTaskEntity(): TaskEntity {
    return TaskEntity(
        id = this.id,
        titulo = this.titulo,
        description = this.description,
        isCompleted = this.isCompleted
    )
}