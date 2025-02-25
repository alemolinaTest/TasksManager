package com.alemolina.tasks.presentation.ui

import androidx.compose.foundation.layout.*
import androidx.compose.material.*
import androidx.compose.runtime.*
import androidx.compose.ui.Modifier
import androidx.navigation.NavHostController
import androidx.navigation.compose.*
import com.alemolina.tasks.presentation.TaskViewModel
import com.alemolina.tasks.presentation.navigation.NavigationGraph

@Composable
fun MainScreen(viewModel: TaskViewModel) {
    val navController = rememberNavController()

    Scaffold(
        topBar = { TopAppBar(title = { Text("Mis Tareas") }) },
        bottomBar = { BottomBar(navController) }
    ) { padding ->
        Box(modifier = Modifier.padding(padding)) {
            NavigationGraph(navController, viewModel)
        }
    }
}

@Composable
fun BottomBar(navController: NavHostController) {
    BottomAppBar {
        Spacer(modifier = Modifier.weight(1f))
        Button(onClick = {
            navController.navigate("addTask") {
                launchSingleTop = true
                restoreState = true
            }
        }) {
            Text("+ Agregar")
        }
    }
}
