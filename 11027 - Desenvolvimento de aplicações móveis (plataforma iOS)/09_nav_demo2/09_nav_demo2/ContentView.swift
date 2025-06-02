//
//  ContentView.swift
//  09_nav_demo2
//
//  Created by Gonçalo Feliciano on 02/06/2025.
//

import SwiftUI

struct ContentView: View {
    
    @State var msg = "Hello, world!"
    var body: some View {
        
    
        NavigationStack{
            
            VStack {
                
               
                Image(systemName: "globe")
                    .imageScale(.large)
                    .foregroundStyle(.tint)
                Text(msg)
            }
            .padding()
            
            NavigationLink {
                newView(msg: $msg)
            } label: {
                
                Text("Go to new view")
                    .frame(width: 200, height: 50)
                    .background(.blue)
                    .foregroundColor(.white)
                    .clipShape(Capsule())
            }

            NavigationLink {
                newView(title: "Nova Pagina", msg: $msg)
            } label: {
                
                Text("Go to Pag 2")
                    .frame(width: 200, height: 50)
                    .background(.blue)
                    .foregroundColor(.white)
                    .clipShape(Capsule())
            }
            
            
        }
    }
}

#Preview {
    ContentView()
}
