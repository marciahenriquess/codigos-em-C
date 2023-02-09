/*Ler dois valores (considere que não serão lidos valores iguais) e escrevê-los em ordem crescente. */

#include <stdio.h>

int main(){
    int valorUm, valorDois;

    printf("\n\nMe diga um valor: ");
    scanf(" %d", &valorUm);
    printf("\nMe diga outro valor: ");
    scanf(" %d", &valorDois);

    if(valorUm > valorDois){
        printf("\nO valor um (%d) eh maior que o valor dois (%d) !\n\n", valorUm, valorDois);
    }else{
        printf("\nO valor dois (%d) eh maior que o valor um (%d) !\n\n", valorDois, valorUm);
    }

    system("pause");
}