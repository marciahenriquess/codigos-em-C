/*Escreva um algoritmo para imprimir os números de 1 (inclusive) a 10 (inclusive) em ordem
decrescente. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;

    for(i=10; i>=1; i--){
        printf("%d\n", i);
    }

    system("pause");
    return 0;
}