//
//  newView.swift
//  09_nav_demo2
//
//  Created by Gonçalo Feliciano on 02/06/2025.
//

import SwiftUI

struct newView: View {
    
    var title: String = "Pagina 2"
    
    @Binding var msg: String
    
    
    var body: some View {
        VStack{
            
            Text(title)
                .font(.largeTitle)
                .fontWeight(.bold)
            
            TextField("Digite algo", text: $msg )
                .frame(width: 300)
                .textFieldStyle(.roundedBorder)
                
            
            
        }
    }
}

#Preview {
    newView(msg: .constant(""))
}
