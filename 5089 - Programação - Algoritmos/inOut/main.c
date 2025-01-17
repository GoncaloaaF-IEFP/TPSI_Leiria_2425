#include <stdio.h>

int main(void) {
    int num = 0;

    printf("Digite um num: "); // mostra
    scanf("%d", &num); //lê
    printf("o valor Digitado foi: %d\n\n", num);

    printf("Digite uma Data (DD\\MM\\ANO):\n\n");  //  \\ -> mostra uma \ ma msg
                                                //  \" -> mostra uma " ma msg

    int dia;
    int mes;
    int ano;
    printf("Digite uma Data (DD/MM/ANO): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("\n----Data----\n");
    printf("Dia: %d\nmes: %d\nano: %d", dia, mes, ano);








// Faça um Programa que peça dois números e imprima a soma.
/*

//1º pedir um num

// criar uma var para o num
    int num1;
//msg para pedir  num
    printf("Digite um num");
// ler num
    scanf("%d", &num1);



//2º pedir outro num

//3ª somar os 2 num

//4º mostrar na consola o resultado


*/

// ex2 2


    return 0;
}
