//
//  Aluno.swift
//  11_List
//
//  Created by Gonçalo Feliciano on 05/06/2025.
//

import Foundation


class Aluno: Identifiable{
    
    var id: UUID = UUID()
    
    var nome: String
    var email: String
    var listaDeNotas: [Double]
    
    init(nome: String, email: String, listaDeNotas: [Double] = []) {
        self.nome = nome
        self.email = email
        self.listaDeNotas = listaDeNotas
    }
    
    
    
}
