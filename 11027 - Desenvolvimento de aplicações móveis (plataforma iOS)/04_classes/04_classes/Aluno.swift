//
//  Aluno.swift
//  04_classes
//
//  Created by Gonçalo Feliciano on 23/05/2025.
//


class Aluno{
    
    var nome: String
    var idade: Int
    var altura: Double

    init(nome: String, idade: Int, altura: Double = 1.0) {
        self.nome = nome
        self.idade = idade
        self.altura = altura
    }
    
    
    func envelhecer(anos: Int = 1){
        self.idade += anos
    }
    
    func infos() -> String{
        return "Nome: \(nome), Idade: \(idade), Altura: \(altura)"
    }
    
    
}
