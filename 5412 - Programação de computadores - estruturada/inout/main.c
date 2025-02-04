#include <stdio.h>


int main(void) {

    int num;
    char ch;
    char ch2;




    printf("Enter a number: ");
    scanf("%d", &num);
    printf("o num é: %d\n", num);
    printf("o a letra seria é: %c\n", num);

    printf("Enter a char: ");
    scanf("%s", &ch);
    printf("a letra é(c): %c\n", ch);
    printf("a letra é(ascii): %d\n", ch);

   fflush(stdin);
    printf("Enter a new char: ");
    num = getchar();
    printf("%c\n", num);
    printf("%d\n", num);
    printf("Nova Var: ");


    printf("------------------------------------------------------\n");

    puts("mensagem de texto sem var");
    puts("mensagem2 de texto sem var");


    return 0;
}
