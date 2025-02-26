package com.alemolina.tasks.presentation.ui

import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.lazy.items
import androidx.compose.material.*
import androidx.compose.runtime.*
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import androidx.navigation.NavHostController
import com.alemolina.tasks.domain.model.DomainTask
import com.alemolina.tasks.presentation.TaskViewModel

@Composable
fun TaskListScreen(viewModel: TaskViewModel, navController: NavHostController) {
    val tasks by viewModel.tasks.collectAsState()
    val isLoading by viewModel.isLoading.collectAsState()

    if (isLoading) {
        LoadingAnimation()
    } else {
        Column(modifier = Modifier.padding(16.dp)) {
            LazyColumn {
                items(tasks) { task ->
                    TaskItem(
                        task,
                        onClick = {
                            viewModel.getTaskById(taskId = task.id)
                            navController.navigate("taskDetail")
                        },
                        onToggle = { viewModel.toggleTask(task.id) },
                        onDelete = { viewModel.removeTask(task.id) }
                    )
                }
            }
        }
    }
}

@Composable
fun TaskItem(task: DomainTask, onClick: () -> Unit, onToggle: () -> Unit, onDelete: () -> Unit) {
    var showDialog by remember { mutableStateOf(false) }

    Row(
        modifier = Modifier
            .fillMaxWidth()
            .clickable { onClick() } // Click to go to details
            .padding(8.dp),
        horizontalArrangement = Arrangement.SpaceBetween
    ) {
        Column(modifier = Modifier.weight(1f)) {
            Text(text = task.titulo, style = MaterialTheme.typography.h6)
            task.description?.let { Text(text = it, style = MaterialTheme.typography.body2) }
        }
        Checkbox(checked = task.isCompleted, onCheckedChange = { onToggle() })
        Button(onClick = { showDialog = true }) { // 🔥 Show dialog before deleting
            Text("Eliminar")
        }
    }

    if (showDialog) {
        AlertDialog(
            onDismissRequest = { showDialog = false },
            title = { Text("Eliminar Tarea") },
            text = { Text("¿Estás seguro de que deseas eliminar esta tarea?") },
            confirmButton = {
                Button(
                    onClick = {
                        onDelete()
                        showDialog = false
                    }
                ) {
                    Text("Sí")
                }
            },
            dismissButton = {
                Button(
                    onClick = { showDialog = false }
                ) {
                    Text("Cancelar")
                }
            }
        )
    }
}