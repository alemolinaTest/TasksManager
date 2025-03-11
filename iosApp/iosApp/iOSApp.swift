import SwiftUI
import ComposeApp

@main
struct iOSApp: App {
    init() {
        DoInitKoinKt.doInitKoin()  // Initialize Koin for iOS

    }
    var body: some Scene {
        WindowGroup {
            ContentView()
        }
    }
}
