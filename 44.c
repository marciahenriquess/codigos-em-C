/*Escreva um algoritmo para ler 2 valores e se o segundo valor informado for ZERO, 
deve ser lido um novo valor, ou seja, para o segundo valor não pode ser aceito o valor
zero e imprimir o resultado da divisão do primeiro valor lido pelo segundo valor 
lido. (utilizar a estrutura REPITA)*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float valorUm, valorDois, divisaoPrimeiroComSegundo;

    printf("\n\nDigite o primeiro valor: ");
    scanf("%f", &valorUm);
    printf("\nDigite o segundo valor: ");
    scanf("%f", &valorDois);

    while(valorDois == 0){
        printf("\nDigite o segundo valor: ");
        scanf("%f", &valorDois);
    }

    divisaoPrimeiroComSegundo = (valorUm/valorDois);

    printf("\nA divisao do primeiro valor (%.2f) pelo segundo valor (%.2f) eh: %.3f\n\n", valorUm, valorDois, divisaoPrimeiroComSegundo);

    system("pause");
    return 0;
}