class Demo:
    def __init__(self):
        self.prop1 = "p1"   # publico   <- na class e nas sub classes e fora
        self._prop2 = "p2"  # porteced  <- na class e nas sub classes
        self.__prop3 = "p3" # privado   <- na class
        self.log = {self.__prop3:0,
                      self._prop2:0,
                      self.prop1:0}

        self.__porp4 = "self.__porp4"


    def set_prop3(self, novo_val):
        if type(novo_val) != str:
            print("prop3 deve ser string")
            return False

        self.log[novo_val] = self.log[self.__prop3]
        self.log.pop(self.__prop3)

        self.__prop3 = novo_val

    def get_prop3(self):
        self.log[self.__prop3] += 1
        return self.__prop3

    #@property <- 11h

    @property
    def prop_teste(self):
        return self.__porp4


    @prop_teste.setter
    def prop_teste(self, novo_val):
        self.__porp4 = novo_val



class Demo2(Demo):
    def __init__(self):
        super().__init__()
        print("Demo2")
        print(super()._prop2)
        print(super().prop1)
        ## print(super().__prop3) <- nao tenho acesso -> __ <- marcar uma porp como privada