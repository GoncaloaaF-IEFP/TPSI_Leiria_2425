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
                    
                    
                    Section {
                        ForEach(vm.alunos.filter(vm.filtroAlunos)) { aluno in
                            ListLineView(aluno: aluno)
                        }
                    }
                    
                    
                   
                    
                    Section {
                        ForEach(vm.alunos.filter(vm.filtroAlunos2)) { aluno in
                            ListLineView(aluno: aluno)
                        }
                    } header: {
                        HStack {
                            Image(systemName: "plus")
                            Text("Header")
                        }
                    }
                    

                    Section {
                        ForEach(vm.alunos.filter({ aluno in
                            
                            aluno.nome.starts(with: "A")
                            
                            
                        })) { aluno in
                            ListLineView(aluno: aluno)
                        }
                    } header: {
                        HStack {
                            Image(systemName: "plus")
                            Text("A")
                        }
                    } footer: {
                        HStack {
                            Image(systemName: "cross")
                            Text("Footer")
                        }
                    }
            
                    /*
                    .onDelete { idx in
                        
                        vm.alunos.remove(atOffsets: idx)
                        print(vm.alunos.count)
                    }
                    .onMove { idx, dest in
                        vm.alunos.move(fromOffsets: idx, toOffset: dest)
                    }
                    
                    
                    */
        
                } //List
                .listStyle(.plain)
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
