//
//  GloboView.swift
//  14_hideView
//
//  Created by Gonçalo Feliciano on 12/06/2025.
//

import SwiftUI

struct GloboView: View {
    var body: some View {
        Rectangle()
            .fill(Color.blue)
            .frame(width: 300, height: 300)
            .overlay {
                VStack{
                    Image(systemName: "globe")
                        .imageScale(.large)
                        .foregroundStyle(.white)
                    
                    Text("Hello, world!")
                        .foregroundStyle(.white)
                        .fontWeight(.bold)
                }
            }
    }
}

#Preview {
    GloboView()
}
