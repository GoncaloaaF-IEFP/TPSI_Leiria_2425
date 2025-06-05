//
//  ContentView.swift
//  11_List
//
//  Created by Gonçalo Feliciano on 05/06/2025.
//

import SwiftUI

struct ContentView: View {
    
    @StateObject var vm = ContentViewModel()
    
    var body: some View {
        
        NavigationStack { // NavigationView
            VStack {
                /*
                List(vm.alunos, id: \.self){ aluno in
                    Text(aluno)
                    
                }
              */
                
                /*
                List{
                
                    ForEach(vm.alunos, id: \.self){ aluno in
                        
                        NavigationLink {
                            Text(aluno)
                        } label: {
                            Text(aluno)
                        }
                    }
            
                }.listStyle(.automatic)
                
                */
                
                
                List{
                    ForEach(vm.alunos){ aluno in
                        
                        NavigationLink {
                            InfoView(aluno: aluno)
                        } label: {
                            ListLineView(aluno: aluno)                        }
                       
                        
                    }
                    
                    
                }
                .listStyle(.automatic)
                
                
            }
            .padding()
            .navigationTitle(vm.titulo)
        }
      
    }
}

#Preview {
    ContentView()
}
