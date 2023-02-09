/*Ler o número de alunos existentes em uma turma e, após isto, ler as notas destes alunos, calcular e
escrever a média aritmética dessas notas lidas. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeroDeAlunos, notaDeAlunos[11], i, somaNotaDosAlunos=0;
    float mediaAritmeticaDasNotasDosAlunos;

    printf("\n\nDiga quantos alunos existentes na turma: ");
    scanf("%d", &numeroDeAlunos);
    printf("\n");

    for(i=0; i<10; i++){
        printf("Me diga a nota do aluno %d: ", i+1);
        scanf("%d", &notaDeAlunos[i]);
        somaNotaDosAlunos = (somaNotaDosAlunos + notaDeAlunos[i]);  
    }

    mediaAritmeticaDasNotasDosAlunos = (somaNotaDosAlunos/numeroDeAlunos);

    printf("\n\nA media aritmetica das notas de todos os alunos eh: %.2f.\n\n\n", mediaAritmeticaDasNotasDosAlunos);

    system("pause");
    return 0;
}