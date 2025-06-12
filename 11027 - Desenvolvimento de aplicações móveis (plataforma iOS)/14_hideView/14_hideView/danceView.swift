//
//  danceView.swift
//  14_hideView
//
//  Created by Gonçalo Feliciano on 12/06/2025.
//

import SwiftUI

struct DanceView: View {
    var body: some View {
        Image(systemName: "figure.dance.circle.fill")
            .imageScale(.large)
            .foregroundStyle(.yellow)
        
        Text("Ola Mundo")
    }
}

#Preview {
    DanceView()
}
