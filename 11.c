/*Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês,
mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele
efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas
vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do
vendedor. */

#include <stdio.h>

int main(){
    int carrosVendidos, totalDeVendas; 
    float salarioFixo, comissaoPorCarroVendido, salarioFinalVendedor, valorPorCarroVendido, porcentagemDeVendas;

    printf("Me fale o número de carros vendidos: ");
    scanf("%d", &carrosVendidos);
    printf("Me fale o valor total de suas vendas: ");
    scanf("%d", &totalDeVendas);
    printf("Me fale o  seu salario fixo: ");
    scanf("%f", &salarioFixo);    
    printf("Me fale o valor que recebe por carro vendido: ");
    scanf("%f", &valorPorCarroVendido);

    comissaoPorCarroVendido = (carrosVendidos * valorPorCarroVendido);
    porcentagemDeVendas = ((totalDeVendas * 5) / 100);

    salarioFinalVendedor = (salarioFixo + porcentagemDeVendas + comissaoPorCarroVendido);

    printf("Seu salario final eh: %2.f", salarioFinalVendedor);

    getch();

    return 0;
}