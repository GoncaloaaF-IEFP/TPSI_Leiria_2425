#include <stdio.h>



/*
 *
 * tipos de dados primitivos (int, char, float, double)
 * var
 * Condições
 *      if/ if else /  else
 *      switch / case
 * Loops
 *      while
 *
 */

// faça um porgrama com o loop while que me mostre todos os números par de 0 a 100
int main(void) {

    int i = 0;
    int max = 1000;
    int loopCount = 0;
    printf("Antes do while\n");

    while (i <= max) {
        loopCount++;
        if (i % 2 == 0) {

            printf("%d\n", i);
            i += 2;

        }else {
            i++;
        }
    }

    printf("depois do while\n");

    printf("loopCount: %d\n", loopCount);





    return 0;
}



