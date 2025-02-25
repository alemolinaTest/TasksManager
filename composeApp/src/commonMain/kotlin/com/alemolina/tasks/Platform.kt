package com.alemolina.tasks

interface Platform {
    val name: String
}

expect fun getPlatform(): Platform