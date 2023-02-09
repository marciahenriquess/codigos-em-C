/* Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final deste aluno.
Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5. Fórmula para o cálculo da média
final é: mediafinal = n1 * 2 + n2 * 3 + n3 * 5 / 10 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1, nota2, nota3, mediaFinal;

    printf("\n\nMe diga sua nota em Matematica: ");
    scanf("%f", &nota1);
    printf("\nMe diga sua nota em Geografia: ");
    scanf("%f", &nota2);
    printf("\nMe diga sua nota em Historia: ");
    scanf("%f", &nota3);

    mediaFinal = ((nota1*2 + nota2*3 + nota3*5)/10);

    printf("\nSua media final eh: %2.f\n", mediaFinal);

    return 0;
}