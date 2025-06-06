//
//  Aluno.swift
//  12_List_v2
//
//  Created by Gonçalo Feliciano on 06/06/2025.
//



import Foundation

class Aluno:Identifiable{
    
    var id = UUID()
    var nome:String
    var email:String
    var numero:Int
    private var _fotoName:String?
    
    var fotoName:String{
        get {
           return _fotoName ?? "noImg"
        }
    }
    
    
    
    init(nome:String, numero:Int, email:String) {
        self.nome = nome
        self.numero = numero
        self.email = email
    }
}
