#include <stdio.h>


typedef int inteiro;
typedef float decimal;

int main(void) {

    inteiro idade = 10;
    decimal valor = 10.5;

    printf("idade = %d\n", idade);

    return 0;
}


decimal somar(decimal num1, decimal num2) {
    return  num1 + num2;
}