//Reescreva o exercício anterior utilizando a estrutura ENQUANTO. 

#include <stdio.h>
#include <stdlib.h>

int main(){
    float valorUm, valorDois, divisaoPrimeiroComSegundo;

    printf("\n\nDigite o primeiro valor: ");
    scanf("%f", &valorUm);

    do{
        printf("\nDigite o segundo valor: ");
        scanf("%f", &valorDois);
    }while(valorDois == 0);

    divisaoPrimeiroComSegundo = (valorUm/valorDois);

    printf("\nA divisao do primeiro valor (%.2f) pelo segundo valor (%.2f) eh: %.3f\n\n", valorUm, valorDois, divisaoPrimeiroComSegundo);

    system("pause");
    return 0;
}