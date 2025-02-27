package com.alemolina.tasks.domain.model

import com.alemolina.tasks.database.TaskEntity

data class DomainTask(
    val id: Int,
    val titulo: String,
    val latitude: String?,
    val longitude: String?,
    val description: String?,
    val isCompleted: Boolean
)
// Extension function to convert database entity to domain model
fun TaskEntity.toDomain(): DomainTask {
    return DomainTask(
        id = this.id,
        titulo = this.titulo,
        description = this.description,
        latitude = this.latitude,
        longitude = this.longitude,
        isCompleted = this.isCompleted == 1L ,
    )
}

fun DomainTask.toTaskEntity(): TaskEntity {
    return TaskEntity(
        id = this.id,
        titulo = this.titulo,
        description = this.description,
        latitude = this.latitude,
        longitude = this.longitude,
        isCompleted = if (this.isCompleted) 1L else 0L
    )
}