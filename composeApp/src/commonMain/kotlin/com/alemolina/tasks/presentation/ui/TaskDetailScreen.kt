package com.alemolina.tasks.presentation.ui

import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import androidx.navigation.NavHostController
import com.alemolina.tasks.presentation.TaskViewModel

@Composable
fun TaskDetailScreen( viewModel: TaskViewModel, navController: NavHostController) {
    val task by viewModel.task.collectAsState()

    Column(modifier = Modifier.padding(16.dp)) {
        Text(text = "Detalles de la Tarea", style = MaterialTheme.typography.h5)
        Spacer(modifier = Modifier.height(8.dp))
        Text(text = "Título: ${task?.titulo}", style = MaterialTheme.typography.h6)
        Text(text = "Descripción: ${task?.description}", style = MaterialTheme.typography.body1)
        Text(text = "Estado: ${if (task?.isCompleted == true) "Completada" else "Pendiente"}")
        Spacer(modifier = Modifier.height(10.dp))
        androidx.compose.material3.Button(onClick = {
                navController.popBackStack() // Volver a la lista de tareas
        }) {
            androidx.compose.material3.Text("Volver a la Lista")
        }
    }
}