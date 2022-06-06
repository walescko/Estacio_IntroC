#include <stdio.h>
//
// Created by walescko on 05/06/22.
//
void main(void){

    int dividendo, divisor, quociente;

    printf("\nEntre com o valor do dividendo e divisor:\n");
    scanf("%d %d", &dividendo, &divisor);

    if (divisor == 0){
        printf("\nWARNNING: Divisor Nulo\n");
    } else {
        quociente = dividendo/divisor;
        printf("\n%d / %d = %d\n", dividendo, divisor, quociente);
    }

}
