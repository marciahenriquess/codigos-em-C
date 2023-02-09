//Ler 3 valores (considere que não serão informados valores iguais) e escrever o maior deles

#include <stdio.h>

int main(){
    int numeroUm, numeroDois, numeroTres;

    printf("\n\nMe diga tres valores: \n");
    scanf("%d", &numeroUm);
    scanf("%d", &numeroDois);
    scanf("%d", &numeroTres);

    if((numeroUm > numeroDois) && (numeroUm > numeroTres)){
        printf("\nO numero UM eh o maior!");
    }else{
        if((numeroDois > numeroUm) && (numeroDois > numeroTres)){
        printf("\nO numero DOIS eh o maior!");
        }else{
        printf("\nO numero TRES eh o maior!\n\n\n");
        }
    }

    getch();

    return 0;
}