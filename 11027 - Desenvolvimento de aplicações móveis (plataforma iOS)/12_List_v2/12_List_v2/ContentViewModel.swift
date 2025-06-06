//
//  ContentViewModel.swift
//  12_List_v2
//
//  Created by Gonçalo Feliciano on 06/06/2025.
//


import Foundation

class ContentViewModel: ObservableObject {
    
    var titulo: String = "Lista de Alunos"
    
    @Published var alunos: [Aluno] = [
        Aluno(nome: "Ana Silva", numero: 101, email: "ana.silva@example.com"),
        Aluno(nome: "Bruno Costa", numero: 102, email: "bruno.costa@example.com"),
        Aluno(nome: "Carla Mendes", numero: 103, email: "carla.mendes@example.com"),
        Aluno(nome: "Diogo Rocha", numero: 104, email: "diogo.rocha@example.com"),
        Aluno(nome: "Eva Martins", numero: 105, email: "eva.martins@example.com"),
        Aluno(nome: "Fábio Santos", numero: 106, email: "fabio.santos@example.com"),
        Aluno(nome: "Gabriela Lima", numero: 107, email: "gabriela.lima@example.com"),
        Aluno(nome: "Henrique Alves", numero: 108, email: "henrique.alves@example.com"),
        Aluno(nome: "Inês Ferreira", numero: 109, email: "ines.ferreira@example.com"),
        Aluno(nome: "João Ribeiro", numero: 110, email: "joao.ribeiro@example.com")
    ]
    
    
    
}
