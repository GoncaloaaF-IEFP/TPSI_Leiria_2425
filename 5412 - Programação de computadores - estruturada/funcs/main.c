#include <stdio.h>


void olaMundo() {
    printf("Ola!\n");
}


void count0to10() {
  for (int i = 0; i <= 10; i++) {
      printf("%d\n", i);
  }
}

void olaMundo2(int ano) {
    printf("Ola Mundo, em %d\n", ano);
}


void countMinToMax(int min, int max) {

    if (min > max) {
        printf("o contador tem de ser do menor para o maior\n");
        return void;
    }

    printf("Comtador: %d a %d\n", min, max);
    for (int i = min; i <= max; i++) {
        printf("%d\n", i);
    }

}

int soma(int a, int b) {
    int soma = a + b;

    return soma;
}

int multip(int a, int b) {

}

int div(int a, int b) {

}

int sub(int a, int b) {

}

int main() {


    olaMundo();
    count0to10();
    olaMundo2(2023);
    olaMundo2(2026);
    olaMundo2(2028);;

    printf("\n\n");
    countMinToMax(20, 10);

    printf("\n\n");

    countMinToMax(10, 20);

    printf("\n\n");

    int resultado = soma(10, 20);


    return 0;
}