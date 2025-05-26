//
//  Morada.swift
//  04_classes
//
//  Created by Gonçalo Feliciano on 23/05/2025.
//

struct Morada {
    var rua: String
    var numero: Int
    var pais = "Portugal"
    
    
    mutating func atualzarMorada(rua: String, numero: Int) {
        self.rua = rua
        self.numero = numero
    }
}
