/*Ler dois valores (considere que não serão lidos valores iguais) e escrever o maior deles.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int valorUm, valorDois;

    printf("\n\nMe diga um valor: ");
    scanf("%d", &valorUm);
    printf("\nMe diga mais um valor: ");
    scanf("%d", &valorDois);

    if(valorUm > valorDois){
        printf("\nO valor UM eh maior!\n\n");
    }else{
        printf("\nO valor DOIS eh maior!\n\n");
    }
     
    return 0;
}