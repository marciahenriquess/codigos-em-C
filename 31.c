/*Ler 3 valores (A, B e C) representando as medidas dos lados de um triângulo e escrever se formam
ou não um triângulo. OBS: para formar um triângulo, o valor de cada lado deve ser menor que a soma
dos outros 2 lados. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int ladoA, ladoB, ladoC;

    printf("\n\nDiga o lado A do triangulo: ");
    scanf("%d", &ladoA);
    printf("\nDiga o lado B do triangulo: ");
    scanf("%d", &ladoB);
    printf("\nDiga o lado C do triangulo: ");
    scanf("%d", &ladoC);

    if((ladoA < (ladoB + ladoC)) && (ladoB < (ladoA + ladoC)) && (ladoC < (ladoA + ladoB))){
        printf("\nForma um triangulo!\n\n");
    }else{
        printf("\nNAO forma um triangulo!\n\n");
    }

    system("pause");
    return 0;
}