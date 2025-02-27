package com.alemolina.tasks.presentation.ui

import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.material.CircularProgressIndicator
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Text
import androidx.compose.material3.Button
import androidx.compose.material3.ButtonDefaults
import androidx.compose.runtime.Composable
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp
import androidx.navigation.NavHostController
import com.alemolina.tasks.presentation.TaskViewModel
@Composable
fun TaskDetailScreen(viewModel: TaskViewModel, navController: NavHostController) {
    val task by viewModel.task.collectAsState()

    Column(
        modifier = Modifier
            .fillMaxSize()
            .padding(16.dp)
    ) {
        if (task == null) {
            CircularProgressIndicator(modifier = Modifier.align(Alignment.CenterHorizontally))
        } else {
            Spacer(modifier = Modifier.height(8.dp))
            Text(
                text = "Título: ${task!!.titulo}",
                style = MaterialTheme.typography.h4
            )
            Spacer(modifier = Modifier.height(4.dp))
            Text(
                text = "Descripción: ${task!!.description}",
                style = MaterialTheme.typography.h6
            )
            Text(
                text = "Latitud: ${task!!.latitude}",
                style = MaterialTheme.typography.h6
            )
            Text(
                text = "Longitud: ${task!!.longitude}",
                style = MaterialTheme.typography.h6
            )
            Spacer(modifier = Modifier.height(4.dp))
            Text(
                text = "Estado: ${if (task!!.isCompleted) "Completada" else "Pendiente"}",
                style = MaterialTheme.typography.h6
            )

            Spacer(modifier = Modifier.height(20.dp))

            Button(
                onClick = { navController.popBackStack() },
                modifier = Modifier
                    .fillMaxWidth()
                    .padding(horizontal = 16.dp),
            ) {
                Text("Volver a la Lista", color = Color.White)
            }
        }
    }
}
