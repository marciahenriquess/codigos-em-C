/*Escreva um algoritmo para ler as notas da 1a. e 2a. avaliações de um aluno, calcule e imprima a
média (simples) desse aluno. Só devem ser aceitos valores válidos durante a leitura (0 a 10) para cada
nota. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float avaliacaoUm, avaliacaoDois, mediaAvaliacao;

    do{
    printf("\n\nDigite a nota da avaliacao um: ");
    scanf("%f", &avaliacaoUm);
    }while ((avaliacaoUm < 0) || (avaliacaoUm > 10));

    do{
    printf("\nDigite a nota da avaliacao dois: ");
    scanf("%f", &avaliacaoDois);
    }while ((avaliacaoDois < 0) || (avaliacaoDois > 10));

    mediaAvaliacao = ((avaliacaoUm + avaliacaoDois) / 2);

    printf("\nSua media eh: %.2f\n\n", mediaAvaliacao);

    system("pause");
    return 0;
}