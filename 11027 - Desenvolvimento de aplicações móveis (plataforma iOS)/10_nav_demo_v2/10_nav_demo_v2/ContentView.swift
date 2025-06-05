//
//  ContentView.swift
//  10_nav_demo_v2
//
//  Created by Gonçalo Feliciano on 05/06/2025.
//

import SwiftUI

struct ContentView: View {
    var body: some View {
        
        NavigationStack {
            
            VStack {
              
                NavigationLink {
                    newView()
                } label: {
                    Text("Go to new view")
                }

                
            }
            .padding()
            .navigationTitle("Pagina 1")
            .navigationBarTitleDisplayMode(.automatic)
            
            
            
        }
        
    }
}

#Preview {
    ContentView()
}
