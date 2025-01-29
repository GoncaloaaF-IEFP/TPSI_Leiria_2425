#include <stdio.h>


/*
retorno nome(parm){

    corpo

}
retorno     - int
            - char
            - float
            - void -> nao devolve nada

 */

void nome() {
    for (int i = 0; i <  10; i++) {
        printf("%d: Gonçalo\n", i);
    }
    printf("\n");
}

void somaVoid(int num1, int num2) {
    int soma = num1 + num2;
    printf("Soma: %d\n", soma); // salvar numa base de dados
    printf("\n");               // Ligar a lampada
}

int somaInt(int num1, int num2) {
    int soma = num1 + num2;

    return soma;
}

int soma3Int(int valor1, int valor2) {
    int soma = valor1 + valor2;
    return soma;
}






int main() { // inicio do programa, não mexer

    printf("inicio\n");

    somaVoid(2,3);

    int soma2 = somaInt(6,3);

    printf("Soma 2 -> %d\n", soma2);

    somaInt(soma2, 1);


    int val = soma3Int(5,5);

    printf("Soma 5 -> %d\n", val);


    return 0;// fim  do programa, não mexer
} // fim  do programa, não mexer
