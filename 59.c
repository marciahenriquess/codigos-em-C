/*Ler 10 valores e escrever quantos desses valores lidos são NEGATIVOS*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, numero[10], contador=0;

    printf("\n\n");

    for(i=0; i<10; i++){
        printf("Me diga um numero: ");
        scanf("%d", &numero[i]);
    }

    for(i=0; i<10; i++){
        if(numero[i]<0){
            contador++;
        }
    }

    printf("\n\nSao %d numeros negativos\n", contador);

    printf("\n\n");

    system("pause");
    return 0;
}