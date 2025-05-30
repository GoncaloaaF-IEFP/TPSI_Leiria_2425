//
//  ContentView.swift
//  07_swiftUI_MVVM
//
//  Created by Gonçalo Feliciano on 28/05/2025.
//

import SwiftUI

struct ContentView: View {
    
   @StateObject var vm = ContentViewModel()
    
    
    var body: some View {
        VStack {

            Text(vm.nome)
            
            TextField("Nome", text: $vm.nome_tf)
                .frame(width: 200)
                .textFieldStyle(.roundedBorder)
  
            Button {
                vm.alterarNome()
                
            } label: {
                Text("Tap Me")
            }

        }
        .padding()
    }
}


#Preview {
    ContentView()
}
