#include <stdio.h>
//
// Created by walescko on 06/06/22.
//
int main(void){

    int sum = 0;

    printf("\nSoma dos numeros de 1 a 100");

    for(int i = 0; i<=100 ; i++){
        sum = sum + i;
    }

    printf("A soma dos numeros de 1 a 100 é %d\n", sum);
    return 0;

}
