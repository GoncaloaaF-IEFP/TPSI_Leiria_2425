//
//  btnView.swift
//  06_btns_SwiftUI
//
//  Created by Gonçalo Feliciano on 28/05/2025.
//

import SwiftUI

struct btnView: View {
    
    let lbl:String
    
    var body: some View {
        Text(lbl)
            .frame(width: 120,height: 60)
            .fontWidth(.expanded)
            .font(utils.btnFont)
            .foregroundStyle(.white)
            .background(.blue)
            .clipShape(Capsule())
    }
}

#Preview {
    btnView(lbl: "Txt do btn")
}
