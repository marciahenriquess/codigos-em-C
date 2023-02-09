/*Acrescente uma mensagem 'NOVO CÁLCULO (S/N)?' ao final do exercício [48]. Se for
respondido 'S' deve retornar e executar um novo cálculo, caso contrário deverá encerrar o algoritmo.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float avaliacaoUm, avaliacaoDois, mediaAvaliacao;
    char resposta;

    do{
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

        printf("\nNovo calculo? (S ou N) ");
        resposta = getche();
        resposta = toupper(resposta);

    }while(resposta == 'S');

    system("pause");
    return 0;
}