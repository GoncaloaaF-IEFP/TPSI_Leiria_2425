//
//  InfoView.swift
//  11_List
//
//  Created by Gonçalo Feliciano on 05/06/2025.
//

import SwiftUI

struct InfoView: View {
    
    var aluno: Aluno
    
    var body: some View {
       
        VStack(alignment:.center) {
            
            Image("noImg")
                .resizable()
                .frame(width: 300, height: 300)
                .padding(40)

            
            
            VStack(alignment:.leading) {
                Text("Nome: \(aluno.nome)")
                Text("Email: \(aluno.email)")
            }.padding(.bottom, 15)
            
            
            List {
                ForEach(aluno.listaDeNotas, id: \.self) { nota in
                    Text(String.init(format: "%.2f", nota))
                }
            }
            
            
            
            
        }
        .navigationTitle("infos do \(aluno.nome)")
        
        
        
        
    }
}

#Preview {
    InfoView(aluno:         Aluno(nome: "Ana", email: "ana0@exemplo.com", listaDeNotas: [11,13,13,15,13,12,16,14,10,10,20,28]),
)
}
