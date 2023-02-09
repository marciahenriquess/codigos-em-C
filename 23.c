/*Para o enunciado a seguir foi elaborado um algoritmo em Português Estruturado que contém
erros, identifique os erros no algoritmo apresentado abaixo:
Enunciado: Tendo como dados de entrada o nome, a altura e o sexo (M ou F) de uma pessoa, calcule
e mostre seu peso ideal, utilizando as seguintes fórmulas:
 - para sexo masculino: peso ideal = (72.7 * altura) - 58
 - para sexo feminino: peso ideal = (62.1 * altura) - 44.7
            inicio
                ler nome
                ler sexo
                    se sexo = M então
                    peso_ideal = (72.7 * altura) - 58
                    senão
                    peso_ideal = (62.1 * altura) – 44.7
                    fim_se
                escrever peso_ideal
            fim */

#include <stdio.h>

int main(){
    char sexo;
    float altura, peso, pesoIdeal;

    printf("\n\nMe diga sua altura (Ex.: 1.60): ");
    scanf("%f", &altura);
    printf("\nMe diga seu peso: ");
    scanf("%f", &peso);
    printf("\nMe diga seu sexo (F ou M): ");
    scanf(" %c", &sexo);

    if((sexo == 'M') || (sexo == 'm')){
        pesoIdeal = ((72.7 * altura) - 58);
        printf("\nSeu peso eh %.2f e o peso ideal eh: %.2f\n\n", peso, pesoIdeal);
    }else{
        pesoIdeal = ((62.1 * altura) - 44.7);
        printf("\nSeu peso eh %.2f e o peso ideal eh: %2.f\n\n", peso, pesoIdeal);
    }

    system("pause");
    return 0;
}