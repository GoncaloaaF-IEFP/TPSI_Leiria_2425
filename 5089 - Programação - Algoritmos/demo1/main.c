#include <stdio.h>


int main() { // para ja receita


// comt
/*
 * comt
 * multi
 * linha
 *
 */

    // tipo nome
    // int <- num inteiro
    // long <- num inteiro grande ;
    // float f <- num decimal  ;
    // double d <- num decimal  ;
    // char c <- letra ;

    int valor1 = 10;
    int valor2;

    valor2 = 15;

    // \n -> Muda de linha
    // \t -> criar uma tab
    printf("Ola Mundo\n");
    // %i -> placeholder para num inteiros
    printf("v1 = %i\n", valor1);

    // %d -> placeholder para num inteiros
    printf("v2 = %d\n", valor2);

    // a declaração de var deve estar no inicio do bloco a seguir a {
    int dia = 17;
    int mes = 1;
    int ano = 2025;

    // imprimir a data dd/mm/aaaa
    printf("%i/%i/%i\n", dia, mes, ano);

    // Operações com var

    /*
     *  +
     *  -
     *  /
     *  *
     *
     */

    int soma = 10 + 10;
    printf("soma: %i\n", soma);

    soma = valor2 + valor1; // -> 15 + 10 -> 25
    printf("soma2: %i\n", soma);


    int div = 10/3;
    printf("Div: %\n", div);

    div = 11/2;
    printf("Div: %d\n", div);

    int mod = 11 % 2; // % -> devolve o resto da div int
    printf("Mod: %d\n", mod);

    
    // para ja receita
    return 0;
}


/*
 * bin
 * 0 1
 *
 * octal
 * 0 1 2 3 4 5 6 7
 *
 * decimal
 * 0 1 2 3 4 5 6 7 8 9
 *
 * hexa
 * 0 1 2 3 4 5 6 7 8 9 A B C D E F
 *
 * # 00 00 00
 * # FF FF FF
 *
 */