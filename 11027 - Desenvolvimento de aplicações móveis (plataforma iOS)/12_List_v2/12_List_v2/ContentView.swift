//
//  ContentView.swift
//  12_List_v2
//
//  Created by Gonçalo Feliciano on 06/06/2025.
//

import SwiftUI

struct ContentView: View {
    
    @StateObject var vm = ContentViewModel()
    
    
    var body: some View {
        NavigationStack {
            VStack {
           
                List{
                    ForEach(vm.alunos) { aluno in
                        ListLineView(aluno: aluno)
                    }
                    .onDelete { idx in
                        
                        vm.alunos.remove(atOffsets: idx)
                        print(vm.alunos.count)
                    
                    }
                    .onMove { idx, dest in
                        vm.alunos.move(fromOffsets: idx, toOffset: dest)
                    }
        
                } //List
                .navigationTitle(vm.titulo)
                
            
            } // main VStack
            .padding()
            .toolbar {
                EditButton()
                
                /*
                Button {
                    
                } label: {
                    Text("Add")
                }
                 */

                
            }
        
        }
    }
}

#Preview {
    ContentView()
}
