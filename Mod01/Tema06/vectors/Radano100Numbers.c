#include <stdio.h>
#include <stdlib.h>

//
// Created by walescko on 19/06/22.
//
int main(void){

    int numbers[100];

    printf("\nNumeros aletórios: ");
    for(int i=0; i<100; i++){
        numbers[i] = rand()%500; //i+1;
    }

    printf("\nVetor em ordem crescente:\n");
    for(int i = 0; i<100;i++){
       printf("%d ", numbers[i]);
    }

    printf("\nVetor em ordem decrescente:\n");
    for(int i = 99; i>=0;i--){
        printf("%d ", numbers[i]);
    }

    printf("\nEnd\n");
    return 0;
}