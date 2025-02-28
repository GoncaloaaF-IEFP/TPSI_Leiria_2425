#include <stdio.h>

int main(void) {

    /*
     * 10212
     * 'd'
     * 'e'
     * '4'
     *  arrays
     *
     *  "txt"
     *
     *  %d ou %i - int
     *  %f - floats
     *  %c - chars
     *
     *
     */

    char input[10];
    int idade;

    printf("Please enter your name: ");
    scanf("%s", input);
    printf("Please enter your age: ");
    scanf("%d", &idade);

    printf("ola %s\n", input);
    printf("tens %d anos\n", idade);

    // input = "Joao"; <- não funciona


    //Crie uma array com 5 nomes. Os nomes devem ser pedidos ao utilizador



    return 0;
}