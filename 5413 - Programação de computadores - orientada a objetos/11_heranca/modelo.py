from dataclasses import dataclass

@dataclass
class Motor:
    combostivel: str

@dataclass
class Caixa_velocidades:
    automatica: bool
    num_mudanca: int


@dataclass
class Veiculo:
    marca: str
    modelo: str
    num_rodas:int
    motor: Motor
    max_ocupantes: int
    max_velocidade: int
    caixa: Caixa_velocidades


class Carro(Veiculo):

    def __init__(self,
                 marca:str,
                 modelo:str,
                 max_ocupantes,
                 max_velocidade,
                 automatico:bool,
                 num_mudanca:int,
                 combostivel:str
                 ):
        pass
