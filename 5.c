/*Escreva um algoritmo para ler um valor (do teclado) e escrever (na tela) o seu antecessor*/

#include <stdio.h>

int main(){
    int numeroDigitado, antecessor=0, sucessor=0;

    printf("\n\n\n");
    printf("Me diga um valor: ");
    scanf("%d", &numeroDigitado);

    sucessor = numeroDigitado + 1;
    antecessor = numeroDigitado - 1;

    printf("\nSeu sucessor eh: %d", sucessor);
    printf("\nSeu antecessor eh: %d", antecessor);
    printf("\n\n\n");

    return 0;
}