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
    int limitsRandon = 100;

    printf("\nVetor 50\n");
    for(int i = 0; i<50; i++){
        array50[i]= rand()%limitsRandon;
        printf("%d ", array50[i]);
    }

    printf("\n");
    for(int i=0; i<10;i++){
        int scanNumber = rand()%limitsRandon;
        for(int j=0;j<50; j++){
            if(scanNumber==array50[j]){
                printf("O número %d está na posição %d\n", scanNumber, j+1);
            }
        }
    }

    return 0;

}
