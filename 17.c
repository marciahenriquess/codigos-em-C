/*Ler as notas da 1a. e 2a. avaliações de um aluno. Calcular a média aritmética simples e escrever
uma mensagem que diga se o aluno foi ou não aprovado (considerar que nota igual ou maior que 6 o
aluno é aprovado). Escrever também a média calculada. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int notaUm, notaDois, mediaNotaAluno;

    printf("\n\nMe fale sua nota na avaliacao 1: ");
    scanf("%d", &notaUm);
    printf("Me fale sua nota na avaliacao 2: ");
    scanf("%d", &notaDois);

    mediaNotaAluno = ((notaUm + notaDois) / 2);

    if(mediaNotaAluno >= 6){
        printf("\nAluno APROVADO!\n\n");
    }else{
        printf("\nAluno REPROVADO!\n\n");
    }

    return 0;
}