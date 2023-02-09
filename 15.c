/*Ler um valor e escrever se é positivo ou negativo (considere o valor zero como positivo). */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int valorLido;

    printf("\n\nMe diga um valor: ");
    scanf("%d", &valorLido);

    if(valorLido >= 0){
        printf("\nEste valor eh POSITIVO!\n\n");
    }else{
            printf("\nEste valor eh NEGATIVO!\n\n");
    }

    return 0;
}