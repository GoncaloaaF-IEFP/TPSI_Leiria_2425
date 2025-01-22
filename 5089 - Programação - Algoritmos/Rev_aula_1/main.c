#include <stdio.h> // para já receita

int main() { // para já receita


    //Faça um Programa que converta metros para centímetros. 1m = 100cm -> x m = (x*100)cm
/*
    //Criar var
    int valorMetros;
    int valorCentimetros;

    //pedir um valor em m
    //
    //  %d ou %i -> int
    //
    printf("Insira um valor em metros: ");
    scanf("%d", &valorMetros);

    //converter m em cm -> x m = (x*100)cm

    valorCentimetros = valorMetros * 100;

    //Mostrar o resultado
    // __ m são __cm
    printf("%dm são %dcm", valorMetros, valorCentimetros);

*/

    /*
     *
     * %f -> float
     *
     */

 /*
    //Criar var

    float valorMetros;
    float valorCentimetros;

    //pedir um valor em m

     // %f -> float
    printf("\nInsira um valor em metros: ");
    scanf("%f", &valorMetros);

    //converter m em cm -> x m = (x*100)cm
    valorCentimetros = valorMetros * 100;

    //Mostrar o resultado
    // __ m são __cm
    printf("\n%.2fm são %.2fcm\n", valorMetros, valorCentimetros);
*/

/*
    //Faça um Programa que peça a temperatura em graus Fahrenheit,
    //transforme e mostre a temperatura em graus Celsius.
    // C = 5 * ((F - 32) / 9)

    //Criar var
    float valorFahrenheit;
    float valorCelsius;

    // Pedir temp em Fahrenheit
    printf("\nInsira um valor em fahrenheit: ");
    scanf("%f", &valorFahrenheit); //   &var -> ler dados

    //transformar F em C - > C = 5 * ((F - 32) / 9)
    valorCelsius = 5 * ((valorFahrenheit - 32) / 9);

    //Mostrar o resultado
    printf("%.2fºF equival a %.2fºC", valorFahrenheit, valorCelsius);

*/


   // Faça um Programa que peça 2 números inteiros e um número real.

   // Calcule e mostre:
        // o produto do dobro do primeiro com metade do segundo .
        // a soma do triplo do primeiro com o terceiro.
        // o terceiro elevado ao cubo.

    /*
    int inteiro1, inteiro2;
    float real;
    int resp1;

    int resp2Int;
    float resp2Real;

    float resp3;

    // Pedir os num
    printf("digite o primeiro numero Inteiro: ");// -> inteiro1
    scanf("%d", &inteiro1);

    printf("digite o segundo numero Inteiro: ");// -> inteiro2
    scanf("%d", &inteiro2);

    printf("digite o numero real: "); // -> real
    scanf("%f", &real);

    // o produto do dobro do primeiro com metade do segundo. (inteiro1 * 2) * (inteiro2 / 2)
    resp1 = (inteiro1 * 2) * (inteiro2 / 2);
    printf("o produto do dobro do primeiro com metade do segundo -> %d\n", resp1);


    // a soma do triplo do primeiro com o terceiro. (inteiro1 * 3) + real
    resp2Int = (inteiro1 * 3) + real;
    printf("a soma inteira do triplo do primeiro com o terceiro %d\n", resp2Int);


    resp2Real = (inteiro1 * 3) + real;
    printf("a soma Real do triplo do primeiro com o terceiro %.2f\n", resp2Real );


    // o terceiro elevado ao cubo.   real * real * real
    resp3 = real * real * real;

    printf("o cubo de %.2f é %.2f", real, resp3);

*/





    //Tendo como dado de entrada a altura ( h ) de uma pessoa,
    //construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:

    // Para homens : (72.7 * h) - 58
    // Para mulheres: (62.1 * h) - 44.7


    //cirar var
    float altura;
    float pesoHomem;
    float pesoMulher;

    //Pedir a altura
    printf("Digite a altura: ");
    scanf("%f", &altura);

    //calcule seu peso ideal

        // Para homens : (72.7 * altura) - 58

    pesoHomem = (72.7 * altura) - 58;

        // Para mulheres: (62.1 * altura) - 44.7

    pesoMulher = (62.1 * altura) - 44.7;


    printf("para uma altura de %.2f o peso ideal é:\n", altura);
    printf("%.2f no caso dos homens\n", pesoHomem);
    printf("%.2f no caso das Mulheres\n", pesoMulher);



// João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar
// o rendimento diário de seu trabalho.
// Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento
// de pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente
// Sabendo o total de quilos pescados calcule o valor da multa

    // Valor de entrada
    float pesoPescado;

    // var para algoritmo / programa
    float pesoMax = 50;
    float valorMulta = 4;


    // Valor de Saida
    float multa;




    return 0; // para já receita
}// para já receita