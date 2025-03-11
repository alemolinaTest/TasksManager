package com.alemolina.tasks.platform

import android.content.Context
import app.cash.sqldelight.db.SqlDriver
import app.cash.sqldelight.driver.android.AndroidSqliteDriver
import com.alemolina.tasks.database.TasksDatabase

actual class DatabaseDriverFactory(private val context: Context) {
    actual fun createDriver(): SqlDriver {
        return AndroidSqliteDriver(
            schema = TasksDatabase.Schema,
            context = context,
            name = "tasks.db"
        )
    }
}
