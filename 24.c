/*Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se que
ele recebe uma comissão de 3% sobre o total das vendas até R$ 1.500,00 mais 5% sobre o que
ultrapassar este valor, calcular e escrever o seu salário total. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float salarioFixo, vendasEfetuadas, comissaoSobreTres, comissaoSobreCinco, salarioComComissao, vendasMaiorQue1500;

    printf("\n\nMe diga seu salario: ");
    scanf("%f", &salarioFixo);
    printf("\nMe diga o valor total de vendar efetuadas: ");
    scanf("%f", &vendasEfetuadas);

    if(vendasEfetuadas <= 1500){
        comissaoSobreTres = (vendasEfetuadas * 0.03);
        salarioComComissao = (comissaoSobreTres + salarioFixo);
        printf("\nSeu salario com a comissao eh: %2.f\n\n", salarioComComissao);
    }else{
        vendasMaiorQue1500 = (vendasEfetuadas - 1500);
        comissaoSobreCinco =  (vendasMaiorQue1500 * 0.05);
        comissaoSobreTres = (1500 * 0.03);
        salarioComComissao = (comissaoSobreTres + comissaoSobreCinco + salarioFixo);
        printf("\nSeu salario com a comissao eh: %2.f\n\n", salarioComComissao);
    }

    system("pause");
}