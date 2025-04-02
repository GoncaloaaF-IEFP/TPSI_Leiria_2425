class Pessoa:
    nome: str
    email: str

    def __init__(self, nome:str, email:str):
        self.nome = nome.capitalize()
        self.email = email

    def mudar_email(self, novo_email):
        self.email = novo_email




class Aluno(Pessoa):
    def __init__(self, nome, email, turma):
        self.turma = turma
        self.media = None
        super().__init__(nome, email)

    def set_media(self, media):
        self.media = media

    def get_media(self):
        if self.media:
            return self.media
        else:
            return "o Aluno ainda nao tem media"
            # Devia lançar um erro


class Professor(Pessoa):
    def __init__(self, nome, email, lista_UFCDs = []):
        self.lista_UFCDs = lista_UFCDs
        super().__init__(nome, email)