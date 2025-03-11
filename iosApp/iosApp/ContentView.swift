import UIKit
import SwiftUI
import ComposeApp

struct ContentView: UIViewControllerRepresentable {
     let viewModel = TaskViewModelFactory().create()

func makeUIViewController(context: Context) -> UIViewController {
        do {
            let viewModel = TaskViewModelFactory().create()
            return MainViewControllerKt.MainViewController(viewModel: viewModel)
        } catch {
            print("🚨 ERROR: No se pudo obtener TaskViewModel desde Koin")
            return UIViewController() // Devuelve una pantalla vacía si falla
        }
    }

    func updateUIViewController(_ uiViewController: UIViewController, context: Context) {}
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
