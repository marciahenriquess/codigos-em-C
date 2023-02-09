/*Faça um algoritmo para ler: quantidade atual em estoque, quantidade máxima em estoque e
quantidade mínima em estoque de um produto. Calcular e escrever a quantidade média ((quantidade
média = quantidade máxima + quantidade mínima)/2). Se a quantidade em estoque for maior ou igual
a quantidade média escrever a mensagem 'Não efetuar compra', senão escrever a mensagem 'Efetuar
compra'. */

#include <stdio.h>

int main(){
    int quantidadeAtualEmEstoque, quantidadeMaximaEmEstoque, quantidadeMinimaEmEstoque;
    float quantidadeMediaEmEstoque;

    printf("\n\nDiga a quantidade atual em estoque: ");
    scanf("%d", &quantidadeAtualEmEstoque);
    printf("\nDiga a quantidade maxima em estoque: ");
    scanf("%d", &quantidadeMaximaEmEstoque);
    printf("\nDiga a quantidade minima em estoque: ");
    scanf("%d", &quantidadeMinimaEmEstoque);
    
    quantidadeMediaEmEstoque =  ((quantidadeMaximaEmEstoque + quantidadeMinimaEmEstoque)/2);

    printf("\nA quantidade media atual em estoque eh: %.2f", quantidadeMediaEmEstoque);

    if( quantidadeAtualEmEstoque >= quantidadeMediaEmEstoque){
        printf("\nNao efetuar compra!\n\n");
    }else{
        printf("\nEfetuar compra!\n\n");
    }

    system("pause");
    return 0;
}