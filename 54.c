/*Modifique o exercício anterior para aceitar somente valores maiores que 0 para N. Caso o valor
informado (para N) não seja maior que 0, deverá ser lido um novo valor para N. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int valorN, i;

   do{
    printf("\n\nDigite o valor N: ");
    scanf("%d", &valorN);
    if(valorN == 0){
        printf("\nValor invalido!");
    }
   }while(valorN == 0);

    printf("\n\n");
    for(i=1; i<=valorN; i++){
        printf("%d\n", i);
    }
    printf("\n\n");

    system("pause");
    return 0;
}