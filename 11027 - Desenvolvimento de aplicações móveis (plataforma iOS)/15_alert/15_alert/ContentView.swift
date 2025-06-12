//
//  ContentView.swift
//  15_alert
//
//  Created by Gonçalo Feliciano on 12/06/2025.
//

import SwiftUI

struct ContentView: View {
    
    @State var showAlert: Bool = false
    @State var txt = "ola Mundo"
    @State var nome = ""
    
    var body: some View {
        VStack {
            Image(systemName: "globe")
                .imageScale(.large)
                .foregroundStyle(.tint)
            Text(txt)
            
            Button {
                showAlert.toggle()
            } label: {
                Text("Show Alert")
            }
            
            
            Button {
                txt = "ola Mundo"
            } label: {
                Text("foo")
            }

        }
        .padding()
        .sheet(isPresented: $showAlert) {
            TextField("Nome", text: $nome)
                .frame(width: 200)
                .textFieldStyle(.roundedBorder)
        
            HStack {
                
                Button {
                    txt = "Ola \(nome)"
                    showAlert = false
                } label: {
                    Text("salvar")
                }
                Button {
                    
                    showAlert = false
                } label: {
                    Text("Nao salvar")
                }
            }
          
        }
        
        
/*
        .alert("Registado com sucesso!", isPresented: $showAlert) {
                
            Button("OK", role: .cancel) {
                txt = "Ola \(nome)"
            }
            Button("Cancelar", role: .destructive) {
                
                txt = "Não Alterado"
            }
            
        } message: {
          
            TextField("Nome", text: $nome) // o alert nao suporta inputs
            Text("Deseja continuar?")
                
        }
 */
    }
}

#Preview {
    ContentView()
}
