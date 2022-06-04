#include <stdio.h>
//
// Created by walescko on 04/06/22.
//
void main(){

    float dividendo, divisor;

    printf("Entre com o valor do dividendo e disivor respectivamente:\n");
    scanf("%f %f", &dividendo, &divisor);

    printf("\nA divisão de %2f por %.2f é %.2f", dividendo, divisor, dividendo/divisor);

    printf("\nThe End");

}
