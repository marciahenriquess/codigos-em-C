//Ler 10 valores, calcular e escrever a média aritmética desses valores lidos

#include <stdio.h>
#include <stdlib.h>

int main(){
    int valoresLidos[11], i, somaValoresLidos=0;
    float mediaAritmetica;

    printf("\n\n");

    for(i=0; i<10; i++){
        printf("Me diga um valor: ");
        scanf("%d", &valoresLidos[i]); 
        somaValoresLidos = (somaValoresLidos + valoresLidos[i]);
    }

    mediaAritmetica = (somaValoresLidos/10);

    printf("\n\nA media aritmetica desses valores eh: %.2f\n\n\n", mediaAritmetica);
    system("pause");
    return 0;
}