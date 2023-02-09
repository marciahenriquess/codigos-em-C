/*Ler 3 valores (considere que não serão informados valores iguais) e escrevê-los em ordem crescente*/

#include <stdio.h>

int main(){
    int valorUm, valorDois, valorTres;

    printf("\n\nDiga o primeiro valor: ");
    scanf("%d", &valorUm);
    printf("\nDiga o segundo valor: ");
    scanf("%d", &valorDois);
    printf("\nDiga o terceiro valor: ");
    scanf("%d", &valorTres);

    // 1°(1,2,3) | 2°(1,3,2) | 3°(2,1,3) | 4°(2,3,1) | 5°(3,1,2) | 6°(3,2,1) temos 6 possibilidades de ordenaçâo

    if((valorUm > valorDois) && (valorUm > valorTres) && (valorDois > valorTres)){
        printf("\nA ordem crescente dos numeros eh: %d %d %d\n\n", valorUm, valorDois, valorTres);
    }else{
        if((valorUm > valorTres) && (valorUm > valorDois) && (valorTres > valorDois)){
        printf("\nA ordem crescente dos numeros eh: %d %d %d\n\n", valorUm, valorTres, valorDois);
        }else{
            if((valorDois > valorUm) && (valorDois > valorTres) && (valorUm > valorTres)){
            printf("\nA ordem crescente dos numeros eh: %d %d %d\n\n", valorDois, valorUm, valorTres);
            }else{
                if((valorDois > valorTres) && (valorDois > valorUm) && (valorTres > valorUm)){
                printf("\nA ordem crescente dos numeros eh: %d %d %d\n\n", valorDois, valorTres, valorUm);
                }else{
                    if((valorTres > valorUm) && (valorTres > valorDois) && (valorUm > valorDois)){
                    printf("\nA ordem crescente dos numeros eh: %d %d %d\n\n", valorTres, valorUm, valorDois);
                    }else{
                        if((valorTres > valorDois) && (valorTres > valorUm) && (valorDois > valorUm)){
                        printf("\nA ordem crescente dos numeros eh: %d %d %d\n\n", valorTres, valorDois, valorUm);
                        }
                    }
                }
            }
        }
    }

    system("pause");
    return 0;
}