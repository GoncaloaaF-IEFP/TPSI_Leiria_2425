"""
com base nos conceitos de herança modele:

base Funcionario
    nome
    idade
    num Funcionario

um medico

    atributos excluivos  <- exp
        lista pacientes
        especialidade

    metodos exclusivos <- exp
        diagnosticar

um enfermeiro
    atributos excluivos <- exp
        ??

    metodos exclusivos <- exp
        adminstrar_medicamento

um auxiliar medico

"""

class Funcionario:
    def __init__(self, nome:str, idade, num_funcionario):
        self.nome = nome.capitalize()
        self.idade = idade
        self.num_funcionario = num_funcionario



class Medico(Funcionario):

    def __init__(self, nome:str, idade:int, num_funcionario:int, especialidade:str):
        self.especialidade = especialidade
        super().__init__(nome, idade, num_funcionario)

    def diagnosticar(self):
        print(f"medico: {self.nome}, faz um diagnostico")




class Enfermeiro(Funcionario):
    def __init__(self, nome: str, idade: int, num_funcionario: int, especialista: bool = False):
        self.especialista = especialista
        super().__init__(nome, idade, num_funcionario)


    def adminstrar_medicamento(self, paciente):
        print(f"adminstrar medicamento: {paciente}")


class Auxiliar(Funcionario):
    def admitir_paciente(self, paciente):
        print(f"admitir {paciente}")



m = Medico("João", 180, 1, "cardiologia")

m.diagnosticar()


f = Funcionario("João", 180, 1)

print(f.nome)




"""

modele uma loja. A loja deve ter: funcionarios, responsavies, 1 gerente, e clientes 

classes que identifico

class loja
class funcionario
class cliente
class responsavies
class gerente 
class Pessoa


"""