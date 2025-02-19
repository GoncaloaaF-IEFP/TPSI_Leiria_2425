#include <stdio.h>
#include <stdlib.h>


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
        return;
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
    int res = a * b;
    return res;
}

int div(int a, int b) {
    int res = a / b;
    return res;
}


int sub(int a, int b) {
    int res = a - b;
    return res;
}


int main() {
    // var que vao ser utilizadas
    int val1;
    int val2;
    int resultado;
    int dobro;


    // Codigo
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

    val1 = 20;
    val2 = 40;

    resultado = soma(val2, val1);
    printf("o resultado da soma de %d com %d é %d\n",val2, val1, resultado);

    dobro = multip(resultado, 2);
    printf("o dobro do resultado é: %d\n", dobro);

    system("cls | clear");  // <- Limpa a consola

    val1 = 50;
    val2 = 40;
    resultado = soma(val2, val1);
    printf("o resultado da soma de %d com %d é %d\n",val2, val1, resultado);


    system("clear");

    int opt;

    while (1) {
        printf("opt: ");
        scanf("%d", &opt);

        if (opt == 1) {
            printf("soma\n");
        }
        if (opt == 2) {
            printf("Subtração\n");
        }
        if (opt == 3) {
            printf("Multiplicando\n");
        }
        if (opt == 4) {
            printf("Div\n");
        }
    }



    return 0;
}