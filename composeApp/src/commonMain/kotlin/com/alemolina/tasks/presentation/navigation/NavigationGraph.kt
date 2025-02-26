package com.alemolina.tasks.presentation.navigation

import androidx.compose.runtime.Composable
import androidx.navigation.NavHostController
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import com.alemolina.tasks.presentation.TaskViewModel
import com.alemolina.tasks.presentation.ui.AddTaskScreen
import com.alemolina.tasks.presentation.ui.TaskDetailScreen
import com.alemolina.tasks.presentation.ui.TaskListScreen
import com.alemolina.tasks.presentation.ui.LoginScreen

@Composable
fun NavigationGraph(navController: NavHostController, viewModel: TaskViewModel) {
    NavHost(navController = navController, startDestination = "login") {
        composable("login") {
            LoginScreen (navController)
        }
        composable("taskList") {
            TaskListScreen(viewModel, navController)
        }
        composable("addTask") {
            AddTaskScreen(viewModel, navController)
        }
        composable("taskDetail") {
            TaskDetailScreen(viewModel, navController)
        }
    }
}