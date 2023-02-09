/*Ler 10 valores e escrever quantos desses valores lidos estão no intervalo [10,20] (inlcuindo os
valores 10 e 20 no intervalo) e quantos deles estão fora deste intervalo. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeroLido[10], i, contadorInclusive=0, contadorExclusive=0;

    printf("\n\n\n");

//lendo os valores
    for(i=0; i<10; i++){
        printf("Me diga o valor %d de 10: ", i+1);
        scanf("%d", &numeroLido[i]);
    }

//quantos desses valores lidos estão no intervalo
    for(i=0; i<10; i++){
        if((numeroLido[i]>=10) && (numeroLido[i]<=20)){
            contadorInclusive++;
        }
    }

//quantos desses valores lidos não estão no intervalo
    for(i=0; i<10; i++){
        if((numeroLido[i]<10) || (numeroLido[i]>20)){
            contadorExclusive++;
        }
    }

    printf("\n\nSao %d os numeros dentro do intervalor de 10 a 20.\nE sao %d os numeros que estao fora deste intervalo!\n\n\n", contadorInclusive, contadorExclusive);

    system("pause");
    return 0;
}