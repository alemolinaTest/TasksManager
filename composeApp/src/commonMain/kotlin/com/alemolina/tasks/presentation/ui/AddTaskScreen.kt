package com.alemolina.tasks.presentation.ui

import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxWidth
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
            label = { Text("Título") },
            modifier = Modifier.fillMaxWidth()
        )
        Spacer(modifier = Modifier.height(12.dp))
        TextField(
            value = description,
            onValueChange = { description = it },
            label = { Text("Descripción") },
            modifier = Modifier.fillMaxWidth()
        )
        Spacer(modifier = Modifier.height(20.dp))
        Row {
            Button(
                onClick = {
                    if (title.isNotBlank()) {
                        viewModel.addTask(title, description)
                        navController.popBackStack() // Navigate back to task list
                    }
                },
                modifier = Modifier.weight(1f)
            ) {
                Text("Guardar")
            }
            Spacer(modifier = Modifier.width(12.dp))
            Button(
                onClick = {
                    navController.popBackStack() // Allow cancel regardless of title being blank
                },
                modifier = Modifier.weight(1f)
            ) {
                Text("Cancelar")
            }
        }
    }
}