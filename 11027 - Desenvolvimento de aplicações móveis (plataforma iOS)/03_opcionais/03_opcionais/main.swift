//
//  main.swift
//  03_opcionais
//
//  Created by Gonçalo Feliciano on 21/05/2025.
//

import Foundation

/*
 
 var
 let
 
 if / else if/ else
 
 switch
 
 for
 while
 
 func
 
 arrays
 set
 dict
 
 
 opcionais
 
 */


var dict = ["nome": "Gonçalo", "anoNasc":"1986"]

var nums = ["val1": 1986, "val2":1998]


print(dict["Escola"])



/*
 
 Int? != Int
 
 */

var foo:Int?
print(foo)

foo = 10
print(foo)


//var soma = 10 + foo
//print(soma)

/*
 unwrapping optionals
 
 !
 
 if let
 
 ??
 
 guard let
 
 */


var calc = nums["val2"]! - nums["val1"]!
print(calc)


if let abc = nums["val2"] {
    
    print(abc)
    
}else {
    
    print("a key é invalida")
    
}


if let val2 = nums["val2"], let val1 = nums["val1"], val1 == 1988 {
 
    print(val2)
    print(val1)
    
}


if let val2 = nums["val2"] {
    if let val1 = nums["val1"]{
        if val1 == 1988 {
            
            print(val2)
            print(val1)
            
        }
    }
}


// print(val2)

print("--------")

print(nums["val2"] ?? -1)
print(nums["val_2"] ?? -1)

print("--------")

var foto:String? = "a minha foto"


print(foto ?? "foto pre definida")

print("---- ! ----")


func nome_func_1(nome:String? = nil){
    print(nome!)
}
nome_func_1(nome: "Gonçalo")
// nome_func_1()


print("---- if let ----")

func nome_func_2(nome:String? = nil){
    if let nome = nome {
        print(nome)
    }else{
        print("Sem nome")
    }
}

nome_func_2(nome: "Gonçalo")
nome_func_2()

print("---- ?? ----")

func nome_func_3(nome:String? = nil){
        print(nome ?? "Sem nome")
 
}

nome_func_3(nome: "Gonçalo")
nome_func_3()

print("---- gurd let ----")

func nome_func_4(nome:String? = nil){
       
    guard let novo_nome = nome else {
        print("Sem nome")
        return
    }
    print(novo_nome)
    
}

nome_func_4(nome: "Gonçalo")
nome_func_4()
