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


}


int main() {

    olaMundo();
    count0to10();
    olaMundo2(2025);
    olaMundo2(2026);
    olaMundo2(2028);;


    return 0;
}