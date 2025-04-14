class Pessoa:
    def __init__(self, nome, idade):
        self.nome = nome
        self.idade = idade

    def msg(self):
        return f'Pessoa - {self.nome} tem {self.idade} anos.'


class Aluno(Pessoa):
    def __init__(self, nome, idade, turma):
        self.turma = turma
        super().__init__(nome, idade)

    def msg(self):
        return f'Aluno - {self.nome} tem {self.idade} anos.'

class Professor(Pessoa):
    def __init__(self, nome, idade, UFCDs = []):
        self.UFCDs = UFCDs
        super().__init__(nome, idade)

    def msg(self):
        super_msg = super().msg()
        return f"{super_msg}: Lista de UFCDs: {self.UFCDs}"