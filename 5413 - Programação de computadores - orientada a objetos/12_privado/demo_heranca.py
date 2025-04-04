class ClassPai:
    def __init__(self, nome, idade):
        self.nome = nome
        self.idade = idade


class ClassFilho(ClassPai):
    def __init__(self, nome, idade, escola):
        self.escola = escola
        super().__init__(nome, idade)

