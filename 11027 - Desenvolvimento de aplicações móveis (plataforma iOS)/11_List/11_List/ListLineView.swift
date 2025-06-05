//
//  ListLineView.swift
//  11_List
//
//  Created by Gonçalo Feliciano on 05/06/2025.
//

import SwiftUI

struct ListLineView: View {
    
    var aluno: Aluno
    var body: some View {
        
        HStack{
            Image("noImg")
                .resizable()
                .frame(width: 50, height: 50)
                .padding(.trailing, 15)
                
            VStack(alignment: .leading){
                Text(aluno.nome)
                Text(aluno.email)
                    .font(.footnote)
                
            }
            
        }
        
        
        
    }
}

#Preview {
    ListLineView(aluno: Aluno(nome: "Helena", email: "helena7@exemplo.com"))
}
