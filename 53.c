/* Ler um valor N e imprimir todos os valores inteiros entre 1 (inclusive) e N (inclusive). Considere
que o N será sempre maior que ZERO. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int valorN, i;

    printf("\n\nDigite o valor N: ");
    scanf("%d", &valorN);

    printf("\n\n");

    for(i=1; i<=valorN; i++){
        printf("%d\n", i);
    }

    printf("\n\n");

    system("pause");
    return 0;
}