/*As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e R$ 1,00 se forem
compradas pelo menos 12. Escreva um programa que leia o número de maçãs compradas, calcule e
escreva o custo total da compra. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int quantidadeMacas;
    float totalCompra;

    printf("\n\nMe diga a quantidade de macas compradas: ");
    scanf("%d", &quantidadeMacas);

    if(quantidadeMacas < 12){
        totalCompra = (quantidadeMacas * 1.30);
        printf("\nO total da compra eh: RS%2.f \n\n", totalCompra);
    }else{
        totalCompra = (quantidadeMacas * 1);
        printf("\nO total da compra eh: RS%2.f \n\n", totalCompra);
    }

    return 0;
}