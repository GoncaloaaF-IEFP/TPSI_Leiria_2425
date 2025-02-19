#include <stdio.h>

void print(int index, int idades[]);
float calcMediaIdades(int idades[], int idades_size);

int main(void) {

    int idades[] = {15, 20, 19, 49, 50};
    int idades_size = 5;

    print(0, idades);

    print(4, idades);

    print(5, idades);

    idades[0] = 99;

    print(0, idades);

    printf("------------- loop array (for)-------------\n");

    for (int i = 0; i < idades_size; i++) {
        print(i, idades);
    }

    printf("------------- loop array (while)-------------\n");

    int i = 0;
    while (i < idades_size) {
        print(i, idades);
        i += 1;

    }


    printf("------------- calc Media -------------\n");

    return 0;
}

void print(int index, int idades[]) {
    int idade_5 = idades[index]; // 15
    printf("%d\n", idade_5);
}


float calcMediaIdades(int idades[], int idades_size) {
    //TODO: fainalizar a func para calcular a media

}