//
//  ContentView.swift
//  08_nav
//
//  Created by Gonçalo Feliciano on 30/05/2025.
//

import SwiftUI

struct ContentView: View {
    @State var msg = "Hello, World!"
    var body: some View {
        
        NavigationStack {
            
            
            VStack {
                Image(systemName: "globe")
                    .imageScale(.large)
                    .foregroundStyle(.tint)
                Text(msg)
            }
            .padding()
            
            NavigationLink {
                newView(title: "Pagina 2", text: $msg)
            } label: {
                
                Text("Go to new view")
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
