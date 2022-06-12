#include <stdio.h>
//
// Created by walescko on 07/06/22.
//
int main(void){

    int major = 0;
    int number01;

    printf("\nMaior de 15 digitados\n");
    for(int i = 0; i < 15; i++){
        printf("\nDigite o %dº valor: ", (i+1));
        scanf("%d", &number01);
        if (number01 > major){
            major = number01;
        }
    }
    printf("\nO maior número digitado foi %d\n", major);

    return 0;
}
