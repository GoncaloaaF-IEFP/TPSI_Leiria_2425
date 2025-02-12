#include <stdio.h>





/*
 *
 *  not -> !
 *  and -> &&
 *  or  -> ||
 *
 */



/*
 *
 * if/ else if/ else
 *
 *  scope de var
 *
 *  switch case
 *
 *  op trenarios
 *
 *
 */


/*
 *
 * ==
 * >=
 * >
 * <=
 * <
 * !=
 *
 */


int main() {

    int idade = 11;
    int ano = 2025;

    printf("if-else\n");

    if (idade == 10) {
        printf("a idade é: %d", idade);
    }else {
        printf("a idade não é 10\n");
    }

    printf("\nif-else if-else\n\n");

    idade = 101;
    ano = 20254;

    printf("idade: ");
    scanf("%d", &idade);


    if (idade == 10) {
        printf("a idade é: %d\n", idade);
    }else if (ano != 2025) {
        printf("O ano não é 2025\n");
    }else {
        printf("idade não é 10 nem o ano 2025");
    }

    printf("acontece sempre");





    return 0;
}



/*
 * faça um programa que receba um num inteiro,
 * indique se esse número é par ou divisível por 5 ou impar
 *
 */