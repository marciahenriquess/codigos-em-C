/*Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade
dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int dia, mes, ano, somaDiasTotaisIdade;

    printf("\n\n\nMe diga o DIA do seu nascimento: ");
    scanf("%d*c", &dia);
    printf("\nMe diga o MES do seu nascimento: ");
    scanf("%d*c", &mes);
    printf("\nMe diga o ANO do seu nascimento: ");
    scanf("%d*c", &ano);

    somaDiasTotaisIdade = (dia + (mes*30) + (ano*365));

    printf("\nSua idade expressa apenas em dias eh: %d\n\n\n\n", somaDiasTotaisIdade);

    system("pause");
}