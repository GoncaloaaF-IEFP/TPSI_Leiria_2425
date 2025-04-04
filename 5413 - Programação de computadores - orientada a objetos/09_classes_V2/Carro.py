"""

typedef struct  carro{

} Carro;



Classe Bola: Crie uma classe que modele uma bola:

Atributos:  <- o que define a objeto

    Cor,
    circunferência,
    material
"""


class Bola:

    def __init__(self,
                 cor: str,
                 material: str,
                 circ: float):  # <- construtor
        self.cor = cor
        self.material = material
        self.circunferencia = circ
        print(f"Bola {self.cor} Inicializada com sucesso!")




"""
CustomerID	
CustomerName	
ContactName
Address	
City	
PostalCode	
Country

"""
class Cliente:
    """
    CustomerID: int
    CustomerName: str
    ContactName: str
    Address: str
    City: str
    PostalCode: str
    Country: str
    """

    def __init__(self,
                 CustomerID,
                 CustomerName,
                 ContactName,
                 Address,
                 City,
                 PostalCode,
                 Country
                 ):
        self.CustomerID = CustomerID
        self.CustomerName = CustomerName
        self.ContactName = ContactName
        self.Address = Address
        self.City = City
        self.PostalCode = PostalCode
        self.Country = Country

        print("Cliente Inicializado com sucesso!")



















class Carro:
    #   def __init__() : <- construtor
    #   pass

    marca: str
    cor: str

    def __init__(self, marca, cor): # <- construtor
        self.marca = marca
        self.cor = cor

        print("Carro Inicializado com sucesso!")


    def andar(self):
        print(f"o {self.marca} {self.cor} esta a andar")

    def parar(self):
        print(f"o {self.marca} {self.cor} esta a parar")

    def mudar_cor(self, nova_cor: str):
        print(f"o a cor do {self.marca} esta a mudar de {self.cor} para {nova_cor}")
        self.cor = nova_cor
        print("Atulizar doc do carro")



""""
1 - Classe Bola: Crie uma classe que modele uma bola: 
    Atributos:  Cor,  circunferência,  material
    Métodos:  trocaCor,  mostraCor

"""

class Bola:

    def __init__(self,
                 cor: str,
                 material: str,
                 circ: float):  # <- construtor
        self.cor = cor
        self.material = material
        self.circunferencia = circ
        print(f"Bola {self.cor} Inicializada com sucesso!")

    def trocarCor(self, nova_cor: str):
        self.cor = nova_cor



def trocarCor_v2(nova_cor: str):
    pass



"""
2- Classe Quadrado: Crie uma classe que modele um quadrado: 
Atributos: Tamanho do lado
Métodos: Mudar valor do Lado, Retornar valor
"""
2- Classe Quadrado: Crie uma classe que modele um quadrado:
Atributos: Tamanho do lado
Métodos: Mudar valor do Lado, Retornar valor do Lado e calcular Área;

"""
"""
3- Classe Retangulo: Crie uma classe que modele um retangulo:

- Atributos: LadoA, LadoB (ou Comprimento e Largura, ou Base e Altura, a escolher)

- Métodos: Mudar valor dos lados, Retornar valor dos lados, calcular Área e calcular Perímetro;

- Crie um programa que utilize esta classe. Ele deve pedir ao usuário que informe as medidades de um local.

- Depois, deve criar um objeto com as medidas e calcular a quantidade de pisos e de rodapés necessárias para o local.
 do Lado e calcular Área;

"""
"""
3- Classe Retangulo: Crie uma classe que modele um retangulo: 

- Atributos: LadoA, LadoB (ou Comprimento e Largura, ou Base e Altura, a escolher)

- Métodos: Mudar valor dos lados, Retornar valor dos lados, calcular Área e calcular Perímetro;

- Crie um programa que utilize esta classe. Ele deve pedir ao usuário que informe as medidades de um local.

- Depois, deve criar um objeto com as medidas e calcular a quantidade de pisos e de rodapés necessárias para o local.

"""


