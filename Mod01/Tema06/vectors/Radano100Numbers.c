#include <stdio.h>
#include <stdlib.h>

//
// Created by walescko on 19/06/22.
//
int main(void){

    int numbers[100];

    printf("\nNumeros aletórios: ");
    for(int i = 0; i<100;i++){
        numbers[i] = rand()%200;
    }

    for(int i = 0; i<100;i++){
       printf("\n%dº Número %d", i+1, numbers[i]);
    }

    printf("\nEnd\n");
    return 0;
}