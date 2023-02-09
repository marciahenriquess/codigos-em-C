/*Escreva um algoritmo que armazene o valor 10 em uma variável A e o valor 20 em uma variável B.
A seguir (utilizando apenas atribuições entre variáveis) troque os seus conteúdos fazendo com que o
valor que está em A passe para B e vice-versa. Ao final, escrever os valores que ficaram armazenados
nas variáveis.*/

#include <stdio.h>
#include <locale.h>

int main(){
    int a, b, aux;
    setlocale(LC_ALL,"Portuguese");

    printf("\n\n\nMe diga o valor de A: ");
    scanf("%d", &a);
    printf("\nMe diga o valor de B: ");
    scanf("%d", &b);


    aux = b;
    b = a;
    a = aux;


    printf("\nO valor de A agora eh: %d", a);
    printf("\nO valor de B agora eh: %d", b);
    printf("\n\n\n");


    return 0;
}