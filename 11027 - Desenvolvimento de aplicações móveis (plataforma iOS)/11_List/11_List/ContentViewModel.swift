//
//  ContentViewModel.swift
//  11_List
//
//  Created by Gonçalo Feliciano on 05/06/2025.
//


import Foundation

class ContentViewModel: ObservableObject {
    
    var titulo = "Lisa de Alunos"
    
    //@Published var alunos: [String] = ["Ana", "Bruno", "Carlos", "Diana", "Eduardo", "Fernanda", "Gabriel", "Helena", "Igor", "Joana","Ana", "Bruno", "Carlos", "Diana", "Eduardo", "Fernanda", "Gabriel", "Helena", "Igor", "Joana","Ana", "Bruno", "Carlos", "Diana", "Eduardo", "Fernanda", "Gabriel", "Helena", "Igor", "Joana","Ana", "Bruno", "Carlos", "Diana", "Eduardo", "Fernanda", "Gabriel", "Helena", "Igor", "Joana"]

    
    @Published var alunos: [Aluno] = [
        Aluno(nome: "Ana", email: "ana0@exemplo.com", listaDeNotas: [11,13,13,15,13,12,16,14,10,10,20,28]),
        Aluno(nome: "Bruno", email: "bruno1@exemplo.com"),
        Aluno(nome: "Carlos", email: "carlos2@exemplo.com"),
        Aluno(nome: "Diana", email: "diana3@exemplo.com"),
        Aluno(nome: "Eduardo", email: "eduardo4@exemplo.com"),
        Aluno(nome: "Fernanda", email: "fernanda5@exemplo.com"),
        Aluno(nome: "Gabriel", email: "gabriel6@exemplo.com"),
        Aluno(nome: "Helena", email: "helena7@exemplo.com"),
        Aluno(nome: "Igor", email: "igor8@exemplo.com"),
        Aluno(nome: "Joana", email: "joana9@exemplo.com"),
        
        Aluno(nome: "Ana", email: "ana10@exemplo.com"),
        Aluno(nome: "Bruno", email: "bruno11@exemplo.com"),
        Aluno(nome: "Carlos", email: "carlos12@exemplo.com"),
        Aluno(nome: "Diana", email: "diana13@exemplo.com"),
        Aluno(nome: "Eduardo", email: "eduardo14@exemplo.com"),
        Aluno(nome: "Fernanda", email: "fernanda15@exemplo.com"),
        Aluno(nome: "Gabriel", email: "gabriel16@exemplo.com"),
        Aluno(nome: "Helena", email: "helena17@exemplo.com"),
        Aluno(nome: "Igor", email: "igor18@exemplo.com"),
        Aluno(nome: "Joana", email: "joana19@exemplo.com"),
        
        Aluno(nome: "Ana", email: "ana20@exemplo.com"),
        Aluno(nome: "Bruno", email: "bruno21@exemplo.com"),
        Aluno(nome: "Carlos", email: "carlos22@exemplo.com"),
        Aluno(nome: "Diana", email: "diana23@exemplo.com"),
        Aluno(nome: "Eduardo", email: "eduardo24@exemplo.com"),
        Aluno(nome: "Fernanda", email: "fernanda25@exemplo.com"),
        Aluno(nome: "Gabriel", email: "gabriel26@exemplo.com"),
        Aluno(nome: "Helena", email: "helena27@exemplo.com"),
        Aluno(nome: "Igor", email: "igor28@exemplo.com"),
        Aluno(nome: "Joana", email: "joana29@exemplo.com"),
        
        Aluno(nome: "Ana", email: "ana30@exemplo.com"),
        Aluno(nome: "Bruno", email: "bruno31@exemplo.com"),
        Aluno(nome: "Carlos", email: "carlos32@exemplo.com"),
        Aluno(nome: "Diana", email: "diana33@exemplo.com"),
        Aluno(nome: "Eduardo", email: "eduardo34@exemplo.com"),
        Aluno(nome: "Fernanda", email: "fernanda35@exemplo.com"),
        Aluno(nome: "Gabriel", email: "gabriel36@exemplo.com"),
        Aluno(nome: "Helena", email: "helena37@exemplo.com"),
        Aluno(nome: "Igor", email: "igor38@exemplo.com"),
        Aluno(nome: "Joana", email: "joana39@exemplo.com")
    ]
    
    
    
}
