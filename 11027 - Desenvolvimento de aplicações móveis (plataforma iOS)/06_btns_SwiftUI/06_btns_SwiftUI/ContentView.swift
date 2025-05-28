//
//  ContentView.swift
//  06_btns_SwiftUI
//
//  Created by Gonçalo Feliciano on 28/05/2025.
//

import SwiftUI

struct ContentView: View {

    var text = "Ola Mundo"
        
    var body: some View {
        VStack {
            Text(text)
            
            
            Button {
                
                print("It works!")
                
            } label: {
                
                btnView(lbl:"Tap me!")
                
            }
            .padding(20)

            
            
            Button {
                print("It works!")
            } label: {
                
                btnView(lbl:"Btn 2")
            }

            
            
        }
        .padding()
    }
}

#Preview {
    ContentView()
}
