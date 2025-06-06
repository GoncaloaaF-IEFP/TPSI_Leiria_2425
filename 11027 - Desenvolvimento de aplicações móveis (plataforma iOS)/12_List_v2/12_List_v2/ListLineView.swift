//
//  ListLineView.swift
//  12_List_v2
//
//  Created by Gonçalo Feliciano on 06/06/2025.
//

import SwiftUI

struct ListLineView: View {
    var aluno:Aluno
    
    var body: some View {
       
        HStack {
            Image(aluno.fotoName)
                .resizable()
                .frame(width: 60, height: 60)
                .clipShape(Circle())
            
            VStack(alignment: .leading) {
                Text(aluno.nome)
                    .font(.headline)
                Text("número: \(aluno.numero)")
                    .font(.caption)
            }
            
            
            
        }
        
        
        
    }
}

#Preview {
    ListLineView(aluno: Aluno(nome: "nome",numero: 123, email: "Email"))
}
