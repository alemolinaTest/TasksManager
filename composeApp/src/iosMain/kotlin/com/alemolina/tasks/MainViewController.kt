package com.alemolina.tasks

import androidx.compose.ui.window.ComposeUIViewController
import com.alemolina.tasks.presentation.TaskViewModel
import com.alemolina.tasks.presentation.ui.MainScreen
import kotlin.experimental.ExperimentalObjCName

@OptIn(ExperimentalObjCName::class)
@ObjCName("MainViewController")
fun MainViewController(viewModel: TaskViewModel) = ComposeUIViewController {
    MainScreen(viewModel)
}