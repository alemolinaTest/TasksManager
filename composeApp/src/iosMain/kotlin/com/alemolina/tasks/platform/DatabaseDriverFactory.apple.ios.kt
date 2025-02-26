package com.alemolina.tasks.platform

import app.cash.sqldelight.db.SqlDriver
import app.cash.sqldelight.driver.native.NativeSqliteDriver
import com.alemolina.tasks.database.TasksDatabase


actual class DatabaseDriverFactory {
    actual fun createDriver(): SqlDriver {
        return NativeSqliteDriver(schema = TasksDatabase.Schema, name = "tasks.db")
    }
}