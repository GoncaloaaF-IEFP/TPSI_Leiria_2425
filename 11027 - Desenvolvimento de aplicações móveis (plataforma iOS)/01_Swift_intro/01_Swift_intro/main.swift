
import Foundation


// var

var nome = "João" // <-

nome = "Carlos"

nome="Carlos"

var idade: Int

idade = 12

let escola = "IEFP"

// escola = "IEFP Leiria"


// tipos de dados


var str:String = "ola Mundo"
var idade2:Int = 12  // -> int32, int64 ?
var altura:Float = 1.60
var peso:Double = 50.1
var inscrito: Bool = true



print(Int.max) // 9223372036854775807

// print


// print("Ola Mundo", terminator: "\n") // print("Ola Mundo", end="\n")

print("Linha 1", terminator: "\n")
print("Linha 2")


var myName: String

myName = "Gonçalo"

// ola "myName"

print("Ola " + myName)
print("Ola", myName)
print("Ola \(myName)")


var ano = 2025

print("Ola " + myName + " em " + String(ano))
print("Ola", myName, "em", ano)
print("Ola \(myName) em \(ano)")



// op var

var num1 = 10
var num2 = 14;

var soma = num1 + num2

print(soma)



var num3 = 10
var num4 = 14.0

var soma2 = Double(num3) + num4

print(soma2)



var num5: Float = 10.2
var num6 = 14.0

var soma3 = Double(num5) + num6

print(soma3)


// nomes legais para ver

var idade3 = 12
var _idade = 10

// var 0_idade = 12

var 🐶 = "Boby"
print("o nome do 🐶 é \(🐶)")

var boby = "🙈"

print(boby)

var π = "outra coisa qq"


var 读写汉字 = "var em chines"


// condições
 

// if

var val1 = 1
var val2 = 11

if val1 > 10 || val2 == 11{
    
    print("val1 é maior que 10")
    
}else if val1 == 10 {
    
    print("O val1 e igual a 10")
    
}else{
    
    print("O val1 e menor  a 10")
}


// switch

idade = 10

switch idade{
    
case 10:
    
    print("10 anos")
    fallthrough
    print("pos fallthrough")
    
case 15:
    
    print("15 anos")
    break
    print("pos break")
    
case 20:
    print("20 anos")
case 25:
    print("25 anos")
case 30:
    print("30 anos")
    
default:
    print("Outra idade")
    
}


// loops


// range

var  r = 10...100 // 10 a 100
var r2 = 10..<100 // 10 a 99


// for


for elm in 0...10{
    print(elm)
}


print("----------------for v2 -----------------")

for elm in 0...100{

    if elm % 2 == 0{
        continue
    }
    
    print(elm, terminator: " - ")
    
    if elm == 39 {
        
        break
    }
    
}

print("")

print("----------------for v3 -----------------")

for elm in 0...100 where elm % 2 == 0{
    print(elm, terminator: " ")
}
print("")
// while

print("---------------- while -----------------")

var f = 10
while f > 0{
    
    print(f)
    f -= 1 // <- tem mesmo de ser -=
    
}

// "'do'-while"


print("---------------- repeat while -> do-while -----------------")


var j = 10

repeat{
    
    print(j)
    
    
}while j > 10


// funcs
print("---------------- funcs  -----------------")


func ola_mundo(){
    
    print( "Ola Mundo  2" )
    
}

ola_mundo()
ola_mundo()
ola_mundo()


func ola_mundo2(nome:String){
    
    print( "Ola Mundo 2, \(nome)" )
    
}

ola_mundo2(nome: "Gonçalo")
ola_mundo2(nome: "João")



func ola_mundo3(nome:String) -> String{
     return "Ola Mundo 3, \(nome)"
}

ola_mundo3(nome: "Gonçalo")
print(ola_mundo3(nome: "Gonçalo"))

var myMsg = ola_mundo3(nome: "Gonçalo")

print(myMsg)


func ola_mundo4(nome:String) -> String{
    "Ola Mundo 4, \(nome)"
}

ola_mundo4(nome: "Gonçalo")
print(ola_mundo4(nome: "Gonçalo"))

myMsg = ola_mundo4(nome: "Gonçalo")

print(myMsg)



print("---------------- funcs v2  -----------------")


func soma1(val1:Int, val2:Int) -> Int{
    val1 + val2
}


print(soma1(val1: 10, val2: 10))



func soma2(_ val1:Int, _ val2:Int) -> Int{
    val1 + val2
}

print(soma2(10, 10))



func soma3(valor1 val1:Int, valor2 val2:Int) -> Int{
    val1 + val2
}

print(soma3(valor1:10, valor2:10))




func soma(_ val1:Int, com val2:Int) -> Int{
    val1 + val2
}

print(soma(10, com:10))







