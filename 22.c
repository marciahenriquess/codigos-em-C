/*A jornada de trabalho semanal de um funcionário é de 40 horas. O funcionário que trabalhar mais
de 40 horas receberá hora extra, cujo cálculo é o valor da hora regular com um acréscimo de 50%.
Escreva um algoritmo que leia o número de horas trabalhadas em um mês, o salário por hora e escreva
o salário total do funcionário, que deverá ser acrescido das horas extras, caso tenham sido trabalhadas
(considere que o mês possua 4 semanas exatas).*/

#include <stdio.h>

int main(){
    int horasTrabalhadas, salario, valorPorHoraFuncionario, salarioComAcrescimo, calculoHorasExtras, salarioExtra;

    printf("\n\nMe fale a quantidade total de horas trabalhadas no mes: ");
    scanf("%d", &horasTrabalhadas);
    printf("\nMe fale o seu salario: ");
    scanf("%d", &salario);

    valorPorHoraFuncionario = (salario / 40);

    if(horasTrabalhadas > 40){
        calculoHorasExtras = (horasTrabalhadas - 40);
        salarioExtra = (calculoHorasExtras * valorPorHoraFuncionario );
        salarioComAcrescimo = (salario + salarioExtra);
        printf("\nSeu salario com o acrescimo eh: %d\n\n", salarioComAcrescimo);
    }else{
        printf("\nVoce cumpriu a carga horaria normal!\n\n");
    }

    system("pause");
    return 0;
}