package com.alemolina.tasks

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import com.alemolina.tasks.presentation.TaskViewModel
import com.alemolina.tasks.presentation.ui.MainScreen
import org.koin.android.ext.android.inject

class MainActivity : ComponentActivity() {
    private val viewModel: TaskViewModel by inject()
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        setContent {
            MainScreen(viewModel)
        }
    }
}

//@Preview
//@Composable
//fun AppAndroidPreview() {
//    MainScreen(viewModel)
//}