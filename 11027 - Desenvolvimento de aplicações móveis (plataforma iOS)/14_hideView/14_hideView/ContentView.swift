//
//  ContentView.swift
//  14_hideView
//
//  Created by Gonçalo Feliciano on 12/06/2025.
//

import SwiftUI

struct ContentView: View {
    @StateObject var vm = ContentViewModel()
    
    var body: some View {
        VStack {
            Spacer()
            if vm.isViseble {
                GloboView()
             
            }else{
                DanceView()

            }
           
            Spacer()
            
            Toggle("mostrar o globo", isOn: $vm.isViseble)
                .frame(width: 190, height: 50)
                
            
        }
        .padding()
    }
}

#Preview {
    ContentView()
}
