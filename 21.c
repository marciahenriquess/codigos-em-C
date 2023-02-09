/* Ler a hora de início e a hora de fim de um jogo de Xadrez (considere apenas horas inteiras, sem os
minutos) e calcule a duração do jogo em horas, sabendo-se que o tempo máximo de duração do jogo é
de 24 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte*/

#include <stdio.h>

int main(){
    int horaInicio, horaFim, horaTotal;

    printf("\n\nMe fale a hora INICIO do jogo: ");
    scanf("%d", &horaInicio);
    printf("\nMe fale a hora FIM do jogo: ");
    scanf("%d", &horaFim);

    horaTotal = (horaFim - horaInicio);

    printf("\nO horario total do jogo eh: %d", horaTotal);

    if(horaTotal > 24){
        printf("\nO jogo demorou mais de um dia!\n\n");
    }else{
        printf("\nO jogo demorou menos de um dia!\n\n");
    }

    system("pause");
    return 0;
}