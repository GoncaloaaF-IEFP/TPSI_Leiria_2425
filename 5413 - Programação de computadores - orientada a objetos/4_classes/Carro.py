# pass -> cria um bloco de código vazio, que não faz nada

class Carro:

    def __init__(self, marca: str, modelo: str, ano: int, cor:str = "preto"): # construtor Java -> public Carro(String marca, String modelo, int ano)
        self.marca = marca
        self.modelo = modelo
        self.ano = ano
        self.cor = cor
        self.isLigado = False

    def ligar(self) -> None: ## Java -> public void get_info()
        print(f"{self.modelo} está a ligar...")
        self.isLigado = True

    """
    def get_info(self): ## Java -> public String get_info() <- de forma implicita
        msg = "Desligado"
        if self.isLigado:
            msg = "Ligado"

        return f"{self.marca} {self.modelo} de {self.ano} esta {msg}"

    """

    def pintar(self, nova_cor: str):
        self.cor = nova_cor

    def get_info(self) -> str: ## Java -> public String get_info()
        msg = "Desligado"
        if self.isLigado:
            msg = "Ligado"

        return f"{self.marca} {self.modelo} {self.cor} de {self.ano} esta {msg}"