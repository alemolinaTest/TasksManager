package com.alemolina.tasks.location

expect class LocationProvider {
    suspend fun getCurrentLocation(): Location?
    fun hasLocationPermission(): Boolean
}

data class Location(val latitude: Double, val longitude: Double)
