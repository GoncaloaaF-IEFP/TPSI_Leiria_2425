#include <stdio.h>

int main(void) {
    int num1 = 10;
    int num2 = 20;

    int sum = num1 + num2; // soma
    int sub = num1 - num2; // sub
    int div = num1 / num2;  // Divisão
    int mulp = num1 * num2; // multiplicação







    float div2 = 40 / 30;
    printf("res: %f\n", div2);

    div2 = 40.0 / 30;
    printf("res: %f\n", div2);

    puts("----------------");
    int div3 = 2.52 / 1.60;
    printf("res: %d\n", div3);

    float div5 = 2.52 / 1.60;
    printf("res: %f\n", div5);

    puts("----------------");

    int divsor = 3;

    div3 = 5 / divsor;
    printf("res div: %d\n", div3);

    int mod = 5 % 3;
    printf("res mod: %d\n", mod);

    int numOrigianl = (divsor * div3) + mod;

    printf("res numOrigianl: %d\n", numOrigianl);

    puts("----------------");
    char a = 'a';

    char b = a + 4;

    printf("%c\n", b);


    return 0;
}