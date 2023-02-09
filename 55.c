/*Escreva um algoritmo que calcule e imprima a tabuada do 8 (1 a 10)*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;

    printf("\n\n");

    for(i=1; i<=10; i++){
        printf("%d X 8 = %d\n", i, (i *8));
    }

    printf("\n\n");

    system("pause");
    return 0;
}