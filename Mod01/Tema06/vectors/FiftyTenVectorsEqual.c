#include <stdio.h>
#include <stdlib.h>
//
// Created by walescko on 21/06/22.
//
//Faça um algoritmo que leia 50 números inteiros e armazene-os em um vetor.
//Na sequência, leia uma lista de 10 números inteiros e verifique se cada
// um deles está contido em alguma posição do vetor. Em caso positivo,
// mostre a posição do vetor em que ele se encontra.
int main(void){

    int array50[50], array10[10];

    printf("\nVetor 50\n");
    for(int i = 0; i<50; i++){
        array50[i]= rand()%200;
        printf("%d ", array50[i]);
    }
    printf("\nVetor 10\n");
    for(int i = 0; i<10; i++){
        array10[i]= rand()%200;
        printf("%d ", array10[i]);
    }

    


    return 0;

}
