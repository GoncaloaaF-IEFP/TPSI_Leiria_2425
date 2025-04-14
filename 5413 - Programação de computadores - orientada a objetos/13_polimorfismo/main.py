from utils import *


al = Aluno("Rui", 12, "APZ+")
al2 = Aluno("Carlos", 12, "APZ+")

prof = Professor("Joana", 40, [10794, 5413, 5412])
prof2 = Professor("Luis", 47, [5413, 5412])



pessoa:Pessoa = Aluno("Rui", 12, "APZ+")

print(type(pessoa))



lista = [al, al2, prof, prof2]

for elm in lista:
   print(elm.msg())




print(type(al) == Aluno)
print(type(al) == Pessoa)

print(isinstance(al, Aluno))
print(isinstance(al, Pessoa))


p = Pessoa("Joana", 12)


print(isinstance(p, Pessoa))
print(isinstance(p, Aluno))