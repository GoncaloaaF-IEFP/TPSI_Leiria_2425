//
//  ContentView.swift
//  06_btns_SwiftUI
//
//  Created by Gonçalo Feliciano on 28/05/2025.
//

import SwiftUI

struct ContentView: View {

    @State var text = "Ola Mundo"
    @State var text_tf = ""
    @State var count = 0
        
    var body: some View {
        VStack {
            Text(text)
            
            TextField("Qual o seu nome?", text: $text_tf)
                .frame(width: 300)
                .textFieldStyle(.roundedBorder)
            
            Button {
                
                print("It works!")
                
                count += 1
                
                //text = "It works! \(count)"
                
                text = "Ola \(text_tf)!"
                
                text_tf = ""
                
                
            } label: {
                
                btnView(lbl:"Tap me!")
                
            }
            .padding(20)

            
            /*
            
            Button {
                print("It works!")
            } label: {
                
                btnView(lbl:"Btn 2")
            }
*/
            
            
        }
        .padding()
    }
}

#Preview {
    ContentView()
}
