/*Ler um valor e escrever se é positivo, negativo ou zero*/

#include <stdio.h>

int main(){
    float numeroDigitado;

    printf("Me informe um numero e eu te direi se épositivo negativo ou nulo: ");
    scanf("%f", &numeroDigitado);

    if(numeroDigitado >= 1){
        printf("Este numero eh positivo!");
    } else{
        if(numeroDigitado < 0){
        printf("Este numero eh negativo!");            
        }
    else{
        printf("Este numero eh nulo!"); 
        }
    }

    getche();

    return 0;
}