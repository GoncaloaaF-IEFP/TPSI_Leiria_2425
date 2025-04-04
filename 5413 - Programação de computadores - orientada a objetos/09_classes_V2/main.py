from Carro import *



c1 = Carro("Ford", "Azul")
c2 = Carro("BMW", "Preto")

"""
c1.marca = "Ford"
c1.cor = "Azul"

c2.marca = "BMW"
c2.cor = "Preto"
"""


print(c1)
print(c1.marca)

print(c2)
print(c2.marca)

print("--" * 10)

b  = Bola("Amarela", "Plastico", 10.32)
b2 = Bola("Preta", "Pano", 36)

print(b.cor)
print(b2.cor)


print("--" * 10)
print("--" * 10)

c1 = Carro("Ford", "Azul")
c2 = Carro("BMW", "Preto")


c1.andar()
c2.andar()
c1.parar()

print("--" * 10)
print("--" * 10)

print("c1:", c1.cor)
print("c2:", c2.cor)

c1.mudar_cor("Roxo")
c2.mudar_cor("Vermelho")

print("c1:", c1.cor)
print("c2:", c2.cor)

print("--" * 10)
print("--" * 10)
print("--" * 10)
print("--" * 10)



bola = Bola("Amarela", "Plastico", 10.32)
trocarCor_v2("Roxo")

bola.trocarCor("Roxo")




