#include <stdio.h>


/*

Mostrar todoos os num de 0 ate ao valor indicado pelo utilizador

 */
int main(void) {

    int max; // valor indicado pelo utilizador
    int contador = 0; // contador

    printf("digite um numero: ");
    scanf("%d", &max);

    while (contador <= max) {

        printf("%d\n", contador);

        contador++;
    }


    return 0;
}


/*

Mostrar todoos os num de n ate m, tanto n com m são fornecidos pelo utilizador

 */