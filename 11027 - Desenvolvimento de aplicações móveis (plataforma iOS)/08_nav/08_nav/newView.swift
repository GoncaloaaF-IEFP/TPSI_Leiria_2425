//
//  newView.swift
//  08_nav
//
//  Created by Gonçalo Feliciano on 30/05/2025.
//

import SwiftUI

struct newView: View {
    
    var title: String = "Ola Mundo"
    @Binding var text: String
    var body: some View {
        
        VStack{
            Text(title)
                .font(.title)
                .fontWeight(.black)
            
            TextField("novo txt", text: $text)
                .frame(width:220)
                .textFieldStyle(.roundedBorder)
        }
    }
}

#Preview {
    newView(text: .constant("novo txt"))
}
