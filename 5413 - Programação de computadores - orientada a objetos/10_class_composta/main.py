from modelo import *

print("\n\n Inicio \n\n")


ct = Contacto("912312312", "gf@sapo.pt")

p = Pessoa(3,"Rui",
           40,
           ct)



p2 = Pessoa(1,"Rui 2",
           40,
           Contacto("912312312", "gf@sapo.pt"))


p3 = Pessoa(2,"Rui",
           41,
           Contacto("321321312", "g3123f@sa31231po.pt"))

print(p) # <=> print(p.__str__())


print(p == p2)
print(p == p3)
print(p == 1)
print(p == 3)

print("----")
print(p == "foo")
print("----")

print(ct)


print("----" * 10)
print("----" * 10)
print("----" * 10)

ct = Contacto("912312312", "gf@sapo.pt")

p = Pessoa(6,"Rui",
           40,
           ct)

p.contacto.email = "mail@mail.com"

print(p.nome)
print(p.idade)

p.idade = 50

print(p.idade)

print("------")
print(p.idade)
del p.idade
print("------")
print("------")

del p
print("------")

print("------")
print("------")

p = Pessoa(6,"Rui",
           40,
           ct)


print(p.nome)
print(p.idade)
print(p.contacto.email)

print("------")
print("------")




input("press a key to exit")



"""
 
modele uma Aluno com recurso a compoisção, a pessoa deve ter dados pessoais (nome, idade). 
contactos(telefone, email, Morada), Turma.

a turma deve ter o curso, o ano e lista de UFCDs


modele uma Porfessor com recurso a compoisção, a pessoa deve ter dados pessoais (nome, idade). 
contactos(telefone, email, Morada), lista de UFCDs.

uma UFCD deve ter nome, código e num de horas 


Deve usar o maximo de classes que conseguir

"""