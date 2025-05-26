//
//  main.swift
//  04_classes
//
//  Created by Gonçalo Feliciano on 23/05/2025.
//

import Foundation



var aluno:Aluno = Aluno(nome: "Gonçalo", idade: 30)

print(aluno.nome)
print(aluno.idade)


aluno.envelhecer()
print(aluno.idade)



var morada = Morada(rua: "Rua das Flores", numero: 23)
print(morada)
print(aluno)


var morada2 = Morada(rua: "Rua da Palma", numero: 24, pais: "Espanha")

print(morada2)



morada2.numero = 123

print(morada2)


print("-------------------------------------")
print("-----------------aluno---------------")
print("-------------------------------------")


var novoAluno = aluno
print(aluno.infos())
print(novoAluno.infos())

novoAluno.idade = 50
print("----------------novoAluno.infos()----------------")
print(novoAluno.infos())

print("----------------aluno.infos()----------------")
print(aluno.infos())



print("--------------------------------")

func mudarNomeAluno(nome:String, aluno:Aluno) {
    aluno.nome = nome
}

print(aluno.infos())
mudarNomeAluno(nome: "Rui", aluno: aluno)
print(aluno.infos())

print("---------------------------------------")
print("---------------morada2-----------------")
print("---------------------------------------")


var morada3 = morada

print(morada)
print(morada3)



morada3.numero = 99

print("------morada------------")
print(morada)

print("------morada3-----------")
print(morada3)


/*
 func mudarRua(rua:String, morada:Morada) {
 morada.rua = rua
 }
 */

print("-------------")

let al = Aluno(nome: "Carlos", idade: 23)

print(al.idade)
al.idade = 34

print(al.idade)


print("-------------")


let m = Morada(rua: "rua xpto", numero: 99)

//m.rua = "nova rua"


