/*Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste.
Calcular e escrever o valor do novo salário*/

#include <stdio.h>

int main(){
    float salario, percentualReajuste, valorNovoSalario=0, valorNovoReajuste=0;

    printf("Me fale seu salario: ");
    scanf("%f", &salario);
    printf("Me fale seu percentual de reajuste: ");
    scanf("%f", &percentualReajuste);   

    valorNovoReajuste = ((salario * percentualReajuste) / 100);

    valorNovoSalario = (salario + valorNovoReajuste);

    printf("Seu novo salario eh: %2.f", valorNovoSalario);

    getch();

    return 0;
}