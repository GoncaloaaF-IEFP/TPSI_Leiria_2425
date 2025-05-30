//
//  ContentViewModel.swift
//  07_swiftUI_MVVM
//
//  Created by Gonçalo Feliciano on 28/05/2025.
//

import Foundation



class ContentViewModel: ObservableObject{
    
    
    @Published var nome = "Gonçalo" {
        didSet {
            nome_tf = ""
        }
    }
    @Published var nome_tf = ""
    
    
    func alterarNome(){
        if !self.nome_tf.isEmpty{
            
            self.nome = self.nome_tf
            print(self.nome)
        }
    }
    
}
