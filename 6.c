/*Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e escrever a
área do retângulo. */

#include <stdio.h>
#include <stdlib.h>

int funcaoCalculoArea(int valorUm, int valorDois){
    int area=0;

    area = (valorUm * valorDois);

    return area;
}


int main(){
    int base, altura, resultado;

    printf("\n\n\n\nMe diga a base do triangulo: ");
    scanf("%d*c", &base);
    printf("\nMe diga a altura do triangulo: ");
    scanf("%d*c", &altura);  

    resultado = funcaoCalculoArea (base, altura);

    printf("\nA area do trianguo eh: %d\n\n\n", resultado);

    return 0;
}