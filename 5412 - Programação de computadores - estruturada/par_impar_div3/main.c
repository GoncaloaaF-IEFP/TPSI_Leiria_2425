#include <stdio.h>

/*
 * faça um programa que receba um num inteiro,
 * indique se esse número é par ou divisível por 3 ou impar
 *
 *
 * 1 - pedir um valor ao utilizador
 *
 * 2 - ver se esse valor é par
 *
 * 3 - ver se esse valor é div por 3
 *
 * 4 - sei que e impar mas nao div por 3
 *
 *
 */



int main(void) {

    int numero;

    // 1 - pedir um valor ao utilizador

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);


    // 2 - ver se esse valor é par

    if (numero % 2 == 0) {

        printf("o numero %d é par\n", numero);

    }else if (numero % 3 == 0) {//3 - ver se esse valor é div por 3

        printf("o numero %d é div por 3\n", numero);

    }else { // 4 - sei que e impar mas nao div por 3

        printf("o numero %d é impar mas nao div por 3", numero);

    }







    return 0;
}