plugins {
    alias(libs.plugins.kotlinMultiplatform)
    alias(libs.plugins.androidApplication)
    alias(libs.plugins.composeMultiplatform)
    alias(libs.plugins.composeCompiler)
    id("app.cash.sqldelight") version "2.0.1"
    kotlin("native.cocoapods")

}

kotlin {
    androidTarget {
        compilations.all {
            kotlinOptions {
                jvmTarget = JavaVersion.VERSION_11.toString()
            }
        }
    }

    jvmToolchain(11) // 🔹 Ensure JVM 11 is used consistently

    iosX64()
    iosArm64()
    iosSimulatorArm64()


    cocoapods {
        version = "1.16.2"
        summary = "Compose App Shared Module"
        homepage = "https://github.com/alemolinaTest/TasksManager"
        ios.deploymentTarget = "13.0"

        framework {
            baseName = "ComposeApp"
            isStatic = false
            freeCompilerArgs += "-Xbinary=bundleId=com.alemolina.tasks"
            linkerOpts("-lsqlite3")
        }
    }


    sourceSets {
        commonMain.dependencies {
            api(compose.runtime)
            api(compose.foundation)
            api(compose.material)
            api(compose.ui)
            api(compose.components.resources)
            api(compose.components.uiToolingPreview)
            api(libs.androidx.lifecycle.viewmodel)
            api(libs.androidx.lifecycle.runtime.compose)
            api(libs.koin.core)
            api(libs.uuid)
            api(libs.androidx.navigation.compose)
            api(libs.compose.runtime)
            api(libs.compose.ui)
            api(libs.compose.foundation)
            api(libs.compose.material)
            api(libs.sqlDelight.runtime)
            api(libs.coroutines.extensions)
            api(libs.kotlinx.coroutines.core)
            //implementation(libs.sqldelight.driver.sqlcipher)
        }
        androidMain.dependencies {
            implementation(compose.preview)
            implementation(libs.androidx.activity.compose)
            implementation(libs.koin.android)
            implementation(libs.koin.androidx.compose)
            implementation(libs.sqlDelight.android.driver)
            implementation(libs.androidx.security)
            implementation(libs.play.services.location)
        }

        iosMain.dependencies {
            implementation(libs.sqlDelight.native.driver)
            api(libs.sqlDelight.runtime)
            api(libs.koin.core)
            api(libs.kotlinx.coroutines.core)
            api(libs.koin.core)
        }
    }
}

android {
    namespace = "com.alemolina.tasks"
    compileSdk = libs.versions.android.compileSdk.get().toInt()

    defaultConfig {
        applicationId = "com.alemolina.tasks"
        minSdk = libs.versions.android.minSdk.get().toInt()
        targetSdk = libs.versions.android.targetSdk.get().toInt()
        versionCode = 1
        versionName = "1.0"
    }
    packaging {
        resources {
            excludes += "/META-INF/{AL2.0,LGPL2.1}"
        }
    }
    buildTypes {
        getByName("release") {
            isMinifyEnabled = false
        }
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_11
        targetCompatibility = JavaVersion.VERSION_11
    }

    packaging {
        resources {
            excludes += "META-INF/versions/9/OSGI-INF/MANIFEST.MF"
            excludes += "META-INF/LICENSE.md"
            excludes += "META-INF/LICENSE-notice.md"
        }
    }
}

dependencies {
    implementation(libs.identity.jvm)
    implementation(libs.locationdelegation)
    debugImplementation(compose.uiTooling)
}

sqldelight {
    databases {
        create("TasksDatabase") {
            packageName.set("com.alemolina.tasks.database")
        }
    }
}