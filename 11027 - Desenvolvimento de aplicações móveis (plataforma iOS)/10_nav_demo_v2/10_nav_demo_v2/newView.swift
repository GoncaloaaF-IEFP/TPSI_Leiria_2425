//
//  newView.swift
//  10_nav_demo_v2
//
//  Created by Gonçalo Feliciano on 05/06/2025.
//

import SwiftUI

struct newView: View {
    var body: some View {
       
            VStack {
                
                NavigationLink {
                    infosView()
                } label: {
                    Text("View 2")
                        .font(.largeTitle)
                        .bold()
                }
            .navigationTitle("Pagina 2")
        }
    }
}

#Preview {
    newView()
}
