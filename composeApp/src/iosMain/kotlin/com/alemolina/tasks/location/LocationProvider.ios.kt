package com.alemolina.tasks.location
import kotlinx.cinterop.*
import platform.CoreLocation.*
import platform.Foundation.*
import platform.darwin.*
import kotlin.coroutines.resume
import kotlin.coroutines.suspendCoroutine

@OptIn(kotlinx.cinterop.ExperimentalForeignApi::class)
actual class LocationProvider : NSObject(), CLLocationManagerDelegateProtocol {
    private val locationManager = CLLocationManager()

    init {
        locationManager.delegate = this
        locationManager.desiredAccuracy = kCLLocationAccuracyBest
    }

    actual fun hasLocationPermission(): Boolean {
        return CLLocationManager.authorizationStatus() == kCLAuthorizationStatusAuthorizedWhenInUse ||
                CLLocationManager.authorizationStatus() == kCLAuthorizationStatusAuthorizedAlways
    }

    actual suspend fun getCurrentLocation(): Location? {
        if (!hasLocationPermission()) return null  // Check permission before requesting location

        return suspendCoroutine { continuation ->
            locationManager.requestWhenInUseAuthorization()
            locationManager.requestLocation()

            val delegate = object : NSObject(), CLLocationManagerDelegateProtocol {
                override fun locationManager(manager: CLLocationManager, didUpdateLocations: List<*>) {
                    val loc = (didUpdateLocations.lastOrNull() as? CLLocation)
                    if (loc != null) {
                        val coordinates = loc.coordinate.useContents {
                            Location(latitude, longitude)
                        }
                        continuation.resume(coordinates)
                    } else {
                        continuation.resume(null)
                    }
                }

                override fun locationManager(manager: CLLocationManager, didFailWithError: NSError) {
                    continuation.resume(null)
                }
            }

            locationManager.delegate = delegate
        }
    }
}

