/*Faça um algoritmo para ler: número da conta do cliente, saldo, débito e crédito. Após, calcular e
escrever o saldo atual (saldo atual = saldo - débito + crédito). Também testar se saldo atual for maior
ou igual a zero escrever a mensagem 'Saldo Positivo', senão escrever a mensagem 'Saldo Negativo'. */

#include <stdio.h>

int main(){
    char numeroContaCliente[20];
    float saldoContaCliente, debitoContaCliente, creditoContaCliente, calculoSaldoAtualCliente;

    printf("\n\nDiga o numero da sua conta (ex: 000.000.000-00): ");
    scanf(" %s", &numeroContaCliente);
    printf("\nDiga o seu saldo: ");
    scanf("%f", &saldoContaCliente);
    printf("\nDiga o seu debito: ");
    scanf("%f", &debitoContaCliente);
    printf("\nDiga o seu credito: ");
    scanf("%f", &creditoContaCliente);

    calculoSaldoAtualCliente = ( saldoContaCliente - debitoContaCliente + creditoContaCliente );

    printf("\nSeu saldo ATUAL eh: %.2f", calculoSaldoAtualCliente);

    if(calculoSaldoAtualCliente >= 0){
        printf("\nSaldo POSITIVO!\n\n");
    }else{
        printf("\nSaldo NEGATIVO!\n\n");
    }
    
    system("pause");
    return 0;
}