/* Ler o ano atual e o ano de nascimento de uma pessoa. Escrever uma mensagem que diga se ela
poderá ou não votar este ano (não é necessário considerar o mês em que a pessoa nasceu). */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int anoAtual, anoNascimento, anoParaSerEleitor;

    printf("\n\nMe diga o ANO que voce nasceu: ");
    scanf("%d", &anoNascimento);
    printf("\nMe diga o ANO atual: ");
    scanf("%d", &anoAtual);

    anoParaSerEleitor = (anoAtual - anoNascimento);

    if(anoParaSerEleitor >= 16){
        printf("\nVoce PODE votar!\n\n");
    }else{
        printf("\nVoce NAO PODE votar!\n\n");
    }

    return 0;
}