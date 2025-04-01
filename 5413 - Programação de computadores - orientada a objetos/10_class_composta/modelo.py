from dataclasses import dataclass

""" 
Base de dados 

Contacto
    id int PK
    telefone varchar(20)
    email varchar(100)

Pessoa
    id int PK
    nome varchar(20)
    idade int
    contacto FK(Contacto(id))

"""


@dataclass
class Contacto:
    telefone: str
    email: str

    def __str__(self):
        return f'telefone: {self.telefone}, email: {self.email}'


class Pessoa:
    def __init__(self,id:int, nome: str, idade: int, contacto: Contacto):
        self.id = id
        self.nome = nome
        self.idade = idade
        self.contacto = contacto

    def __del__(self):
        print(f"a instancia com id {self.id} foi destruida")


    def __eq__(self, other): # self == other

        if isinstance(other, Pessoa):
            return self.nome == other.nome

        if type(other) == int:
            return self.id == other

        print("NotImplemented")

        return NotImplemented

    def __gt__(self, other):
        pass

    def __lt__(self, other):
        pass

    def __ge__(self, other):
        pass

    def __le__(self, other):
        pass

    def __add__(self, other): # somar
        pass

    def __str__(self):
        return f'{self.nome} {self.idade} - {self.contacto}'