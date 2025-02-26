package com.alemolina.tasks.presentation.ui

import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.width
import androidx.compose.material3.Button
import androidx.compose.material3.Text
import androidx.compose.material3.TextField
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.saveable.rememberSaveable
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.navigation.NavHostController
import com.alemolina.tasks.presentation.TaskViewModel
import androidx.compose.ui.unit.dp

@Composable
fun AddTaskScreen(viewModel: TaskViewModel, navController: NavHostController) {
    var title by rememberSaveable { mutableStateOf("") }
    var description by rememberSaveable { mutableStateOf("") }

    Column(modifier = Modifier.padding(16.dp)) {
        TextField(
            value = title,
            onValueChange = { title = it },
            label = { Text("Título") }
        )
        TextField(
            value = description,
            onValueChange = { description = it },
            label = { Text("Descripción") }
        )
        Row(modifier = Modifier.padding(16.dp)) {
            Button(onClick = {
                if (title.isNotBlank()) {
                    viewModel.addTask(title, description)
                    navController.popBackStack() // Volver a la lista de tareas
                }
            }) {
                Text("Guardar")
            }
            Spacer(modifier = Modifier.width(12.dp))
            Button(onClick = {
                if (title.isNotBlank()) {
                    navController.popBackStack() // Volver a la lista de tareas
                }
            }) {
                Text("Cancelar")
            }
        }
    }
}