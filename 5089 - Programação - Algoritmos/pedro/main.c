#include <stdio.h>

// func para somar 2 valoes

//1º Criar a func
/*
 * 0 - desligado
 * 1 - ligado
 */
int dijuntor(int estado) {

    /*
  * 0 - Sem corrente
  * 1 - com corrente
  */

    if (estado == 1) {
        return 1;
    } else {
        return 0;
    }
}

int soma(int a, int b) {
    int soma = a + b;
    return soma;

}


int main(void) {
    //2º chamar a func

    int luz = dijuntor(0);

    if (luz == 1) {
        printf("tem energia\n");
    }else {
        printf("nao tem energia\n");
    }

    int resultado = soma(5,7);
    printf("5+7=%d", resultado);



    return 0;
}