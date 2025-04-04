from Carro import Carro


c1 = Carro("Ford", "Fiesta", 2018)
print(c1.get_info())



c2 = Carro("Sheleby","Mustang GT500", 2018 )
print(c2.get_info())

c2.ligar()

print(c2.get_info())

"""
def soma(a:int,b:int = 0) -> None:
    print(a + b)

soma(1,5)
soma(2)


##em c 
#  void soma(int a, int b){
#    printf("%d", a + b);
#  }


"""

c3 = Carro("Audi", "A4", 2018, "Vermelho")
print(c3.get_info())


c3.pintar("Roxo")

print(c3.get_info())