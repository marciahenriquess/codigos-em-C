/*Acrescentar uma mensagem de 'VALOR INVÁLIDO' no exercício [44] caso o segundo valor
informado seja ZERO.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float valorUm, valorDois, divisaoPrimeiroComSegundo;

    printf("\n\nDigite o primeiro valor: ");
    scanf("%f", &valorUm);
    printf("\nDigite o segundo valor: ");
    scanf("%f", &valorDois);

    while(valorDois == 0){
        printf("\nValor invalido!");
        printf("\nDigite o segundo valor: ");
        scanf("%f", &valorDois);
    }

    divisaoPrimeiroComSegundo = (valorUm/valorDois);

    printf("\nA divisao do primeiro valor (%.2f) pelo segundo valor (%.2f) eh: %.3f\n\n", valorUm, valorDois, divisaoPrimeiroComSegundo);

    system("pause");
    return 0;
}