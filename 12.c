/*Escreva um algoritmo para ler uma temperatura em graus Fahrenheit, calcular e escrever o valor
correspondente em graus Celsius (baseado na fórmula abaixo):
((f- 32) / 1.8 );*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float temperaturaEmFahrenheit, temperaturaEmCelsius, calculo;

    printf("\n\nMe diga  uma temperatura em graus Fahrenheit e eu te direi e Celsius: ");
    scanf("%f", &temperaturaEmFahrenheit);

    temperaturaEmCelsius = ((temperaturaEmFahrenheit - 32) / 1.8 );

    printf("\nA temperatura %2.fF. eh %2.fC.\n\n\n", temperaturaEmFahrenheit, temperaturaEmCelsius);

    getch();

    return 0;
}