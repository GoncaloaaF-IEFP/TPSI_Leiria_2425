//
//  ContentView.swift
//  13_grid
//
//  Created by Gonçalo Feliciano on 12/06/2025.
//

import SwiftUI

struct ContentView: View {
    
    var columns: [GridItem] = [
        GridItem(.fixed(100)),
        GridItem(.fixed(100)),
        GridItem(.fixed(100))

    ]
    
    
    var body: some View {
        NavigationStack{
            
            
            ScrollView(){
                LazyVGrid(columns: columns, spacing: 20){
                    
                    ForEach(0 ..< 100){ idx in
                        
                        NavigationLink {
                            
                            Text("\(idx)")
                            
                        } label: {
                            Rectangle()
                                .fill(Color(red:Double.random(in: 0...1),
                                            green: Double.random(in: 0...1),
                                            blue: Double.random(in: 0...1)
                                           )
                                )
                                .frame(width: 100, height: 100)
                                .overlay {
                                    Text("\(idx)")
                                        .font(.title)
                                        .foregroundColor(.white)
                                        .fontWeight(.bold)
                                }
                        }

                      
                        
                        
                    } // ForEach
                } //LazyVGrid
            } //ScrollView
            .navigationTitle("Fotos")
            
        } // NavigationStack
    }
}

#Preview {
    ContentView()
}
