#include <stdio.h>
int listSize(int lista[]);


int main(void) {

    int a = 321946238;
    float b = 321946238;
    double c = 321946238;
    char d = 'f';

    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(b));
    printf("%d\n", sizeof(c));
    printf("%d\n", sizeof(d));



    int lista[] = {1, 2, 3,1, 2, 3,1, 2, 3,1, 2, 3,1, 2, 3,1, 2, 3,
                    1, 2, 3,1, 2, 3,1, 2, 3,1, 2, 3,1, 2, 3,1, 2, 3,
                    1, 2, 3,1, 2, 3,1, 2, 3,1, 2, 3,1, 2, 3,1, 2,
                    3,2, 2, 3,1, 2, 3,1, 2, 3,1, 2, 3,1, 2, 3,1, 2, 3,
                     1, 2, 3,1, 2, 3,1, 2, 3,1, 2, 3,1, 2, 3,1, 2, 3,
                    1, 2, 3,1, 2, 3,1, 2, 3,1, 2, 3,1, 2, 3,1, 2, 3,
                    2, 3,1, 2, 3,1, 2, 3,1, 2, 3,1, 2, 3,1, 2, 3,
                    1, 2, 3,1, 2, 3,1, 2, 3,1, 2, 3,1, 2, 3,1, 2, 3,
                    1, 2, 3,1, 2, 3,1, 2, 3,1, 2, 3,1, 2, 3,1, 2, 3
                };

    printf("lista - %d\n", sizeof(lista));
    printf("elm - %d\n", sizeof(lista[0]));

    int list_size =  sizeof(lista) / sizeof(lista[0]);
    printf("list_size - %d\n", list_size);



    printf("list_size func - %d\n", listSize(lista));
    return 0;
}

int listSize(int lista[]) {
    return  sizeof(lista) / sizeof(lista[0]);
}