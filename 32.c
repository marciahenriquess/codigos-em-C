/*Ler o nome de 2 times e o número de gols marcados na partida (para cada time). Escrever o nome
do vencedor. Caso não haja vencedor deverá ser impressa a palavra EMPATE.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char nomePrimeiroTime[50], nomeSegundoTime[50];
    int golsMarcadoPrimeiroTime, golsMarcadoSegundoTime;

    printf("\n\nDiga nome do primeiro time: ");
     scanf(" %s8c",nomePrimeiroTime);
    printf("\nDiga o numero de gols marcado por esse time: ");
    scanf("%d", &golsMarcadoPrimeiroTime);
    printf("\nDiga nome do segundo time: ");
    scanf(" %s", nomeSegundoTime);
    printf("\nDiga o numero de gols marcado por esse time: ");
    scanf("%d", &golsMarcadoSegundoTime);

    if(golsMarcadoPrimeiroTime > golsMarcadoSegundoTime){
        printf("\nO time vencedor foi: %s, com %d gols!\n\n", nomePrimeiroTime, golsMarcadoPrimeiroTime);
    }else{
        printf("\nO time vencedor foi: %s, com %d gols!\n\n", nomeSegundoTime, golsMarcadoSegundoTime);
    }

    system("pause");
    return 0;
}