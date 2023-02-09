/*O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do
distribuidor e dos impostos (aplicados ao custo de fábrica). 
Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, 
escrever um algoritmo para ler o custo de fábrica de um carro,
calcular e escrever o custo final ao consumidor.*/

#include <stdio.h>

int main(){
    int custoCarroFabrica, custoCarroConsumidor, custoImpostos, custoDistribuidor;

    printf("\n\nMe diga o custo de fábrica de um carro: ");
    scanf("%d", &custoCarroFabrica);

    custoDistribuidor = (custoCarroFabrica * 28 / 100);
    custoImpostos = (custoCarroFabrica * 45 / 100);

    custoCarroConsumidor = (custoCarroFabrica + custoDistribuidor + custoImpostos);
  
    printf("\nO custo de um carro novo ao consumidor eh: %d\n\n\n", custoCarroConsumidor);

    return 0 ;
}