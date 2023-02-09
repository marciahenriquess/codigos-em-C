/*Escreva um algoritmo para ler 10 números e ao final da leitura escrever a soma total dos 10
números lidos*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int valoresLidos[11], i, soma=0;

    printf("\n\n");

    for(i=0; i<10; i++){
    printf("Diga um numero: ");
    scanf("%d", &valoresLidos[i]);   
    soma = (soma + (valoresLidos[i]));     
    }

    printf("\nA soma eh: %d\n\n\n", soma);

    system("pause");
    return 0;
}