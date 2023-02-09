/*Ler um valor inteiro (aceitar somente valores entre 1 e 10) e escrever a tabuada de 1 a 10 do valor
lido. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int valorLido, i;

    printf("\n\nDigite o valor da tabuada que deseja: ");
    scanf("%d", &valorLido);

    for(i=1; i<=10; i++){
        printf("%d X %d = %d\n", i, valorLido,(i*valorLido));
    }

    printf("\n\n");

    system("pause");
    return 0;
}