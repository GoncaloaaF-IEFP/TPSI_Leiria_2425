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


    return 0;
}
