/*Reescreva o exercício 50 utilizando a estrutura REPITA e um CONTADOR. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=1;

    do{
        printf("%d\n", i);
        i++;
    }while(i<=10);

    system("pause");
    return 0;
}