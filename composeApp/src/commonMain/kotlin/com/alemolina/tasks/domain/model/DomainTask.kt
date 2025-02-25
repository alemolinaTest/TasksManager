package com.alemolina.tasks.domain.model

data class DomainTask(
    val id: String,
    val title: String,
    val description: String,
    val isCompleted: Boolean
)