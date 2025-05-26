//
//  ContentView.swift
//  05_intro_SwiftUI
//
//  Created by Gonçalo Feliciano on 26/05/2025.
//

import SwiftUI

struct ContentView: View {
    var msg = "Ola Mundo 2"
    
    var body: some View {
        
        VStack(alignment: .center) {
            
            Text(msg)
                .padding(.vertical, 30)
                .font(.largeTitle)
                .fontWeight(.heavy)
                .background(Color.yellow)
                .foregroundStyle(.gray)
               
            
            Text(msg)
                .padding(.vertical, 30)
                .frame(width: 250, height: 60)
                .font(.largeTitle)
                .fontWeight(.heavy)
                .background(Color.yellow)
                .foregroundStyle(.gray)
                .clipShape(Capsule())
               
            
            
            Spacer()
            Spacer()
            
            HStack(alignment: .bottom) {
            Text("Ola Mundo 1")
            Text("Ola Mundo 2")
            Text("Ola Mundo 2")
        }
            
            Spacer()
       
        VStack {
            Text("Ola Mundo 1")
            Text("Ola Mundo 2")
            Text("Ola Mundo 2")
        }
            
            Spacer()
        
        ZStack {
            Text("Ola Mundo 1")
            Text("Ola Mundo 2")
            Text("Ola Mundo 2")
        }
            Spacer()
        
        }
    }
}



#Preview {
    ContentView()
}

/*
 struct ContentView_Previews: PreviewProvider {
 static var previews: some View {
     ContentView()
 }
}
 */
