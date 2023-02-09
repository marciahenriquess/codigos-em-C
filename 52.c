/*Escreva um algoritmo para imprimir os 10 primeiros números inteiros maiores que 100. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=101;

    for(i=1; i<=10; i++){
        printf("%d\n", i+100);
    }

    system("pause");
    return 0;
}