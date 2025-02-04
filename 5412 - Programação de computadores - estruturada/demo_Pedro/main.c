#include <stdio.h>

int main(void) {

    // tipo nome;
    int valInt;    // num inteiro  - int32
    float valFloat;  // num decimais  - 7 casas decimais
    double valDouble; // num decimais  - 12 a 14 casas decimais
    char valChar;   // 1 letra -  ' '


    valInt = 10;
    valFloat = 2.5;
    valDouble = 3.5;
    valChar = 'c';

    int valInt2 = 12;
    float valFloat2 = 212.12;
    double valDouble2 = 231.21;
    char valChar2 = 'm';


    printf("Digite um numero: ");
    scanf("%d", &valInt);

    printf("o num digitado foi: %d\n", valInt);

    printf("Digite um numero decimail 1: ");
    scanf("%f", &valFloat);

    printf("Digite um numero decimail 2: ");
    scanf("%f", &valDouble);

    printf("o num decimail 1 foi: %f\n", valFloat);
    printf("o num decimail 2 foi: %lf\n", valDouble);
    printf("o num decimail __  foi: %d\n", valDouble);
    int valor;


    int valor2 = valor * 3;

    printf("val sem valor: %d ", valor);

    return 0;
}