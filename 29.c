/*Ler 3 valores (considere que não serão informados valores iguais) e escrever a soma dos 2
maiores. */

#include <stdio.h>

int main(){
    int numeroUm, numeroDois, numeroTres, soma=0;

    printf("\n\nMe diga tres valores: \n");
    scanf("%d", &numeroUm);
    scanf("%d", &numeroDois);
    scanf("%d", &numeroTres);

    if ((numeroUm > numeroDois) && (numeroDois > numeroTres)){
        soma = numeroUm + numeroDois;
        printf("A soma dos dois maiores numero eh: %d", soma);
    }else{
         if ((numeroUm > numeroDois) && (numeroDois < numeroTres)){
        soma = numeroUm + numeroTres;
        printf("A soma dos dois maiores numero eh: %d", soma);
         }else{
            if((numeroUm < numeroDois) && (numeroUm > numeroTres)){
            soma = numeroDois + numeroUm;
            printf("A soma dos dois maiores numero eh: %d", soma);
            }else{
                if((numeroUm < numeroDois) && (numeroUm < numeroTres)){
                soma = numeroDois + numeroTres;
                printf("A soma dos dois maiores numero eh: %d", soma);
                }else{
                    if((numeroUm < numeroTres) && (numeroUm >  numeroTres)){
                    soma = numeroUm + numeroTres;
                    printf("A soma dos dois maiores numero eh: %d", soma);
                    }else{
                        if((numeroUm < numeroTres) && (numeroUm <  numeroDois)){
                        soma = numeroTres + numeroDois;
                        printf("A soma dos dois maiores numero eh: %d", soma);
                        }
                    }
                }
            }
         }
    }

    getch();

    return 0;
}