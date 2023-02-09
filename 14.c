/*Ler um valor e escrever a mensagem É MAIOR QUE 10! se o valor lido for maior que 10, caso
contrário escrever NÃO É MAIOR QUE 10! */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int valorLido;

    printf("\n\nMe diga um valor: ");
    scanf("%d", &valorLido);

    if(valorLido > 10){
        printf("\nEste valor eh maior que 10!\n\n");
    }else{
        printf("\nEste valor nao eh maior que 10!\n\n");
    }

    return 0;
}