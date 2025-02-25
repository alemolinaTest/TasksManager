package com.alemolina.tasks.presentation.navigation

import androidx.compose.runtime.Composable
import androidx.navigation.NavHostController
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import com.alemolina.tasks.presentation.TaskViewModel
import com.alemolina.tasks.presentation.ui.AddTaskScreen
import com.alemolina.tasks.presentation.ui.TaskDetailScreen
import com.alemolina.tasks.presentation.ui.TaskListScreen

@Composable
fun NavigationGraph(navController: NavHostController, viewModel: TaskViewModel) {
    NavHost(navController = navController, startDestination = "taskList") {
        composable("taskList") {
            TaskListScreen(viewModel, navController)
        }
        composable("addTask") {
            AddTaskScreen(viewModel, navController)
        }
        composable("taskDetail/{taskId}") { backStackEntry ->
            val taskId = backStackEntry.arguments?.getString("taskId") ?: ""
            TaskDetailScreen(taskId, viewModel, navController)
        }
    }
}