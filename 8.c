/*Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos
brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em relação ao total
de eleitores.*/

#include <stdlib.h>
#include <stdlib.h>

int main(){
    int totalEleitores, totalVotosBrancos, totalVotosNulos, totalVotosValidos, calculoTotalVotos;
    float percentualBrancos, percentualNulos, percentualValidos;

    printf("Me diga o numero total de eleitores: ");
    scanf("%d", &totalEleitores);
    printf("Me diga o número de votos brancos: ");
    scanf("%d", &totalVotosBrancos);
    printf("Me diga o número de votos nulos: ");
    scanf("%d", &totalVotosNulos);
    printf("Me diga o número de votos validos: ");
    scanf("%d", &totalVotosValidos);

    percentualBrancos = (totalVotosBrancos * 100 / totalEleitores);
    percentualNulos = (totalVotosNulos * 100 / totalEleitores);
    percentualValidos = (totalVotosValidos * 100 / totalEleitores);

    printf("O percentual de votos brancos eh: %4.f", percentualBrancos);
    printf("O percentual de votos nulos eh: %4.f", percentualNulos);   
    printf("O percentual de votos validos eh: %4.f", percentualValidos);

    return 0;
}