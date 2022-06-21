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
        array50[i]= rand()%100;
        printf("%d ", array50[i]);
    }
    printf("\nVetor 10\n");
    for(int i = 0; i<10; i++){
        array10[i]= rand()%100;
        printf("%d ", array10[i]);
    }

    printf("\n");
    for(int i=0; i<10;i++){
        for(int j=0;j<50; j++){
            if(array10[i]==array50[j]){
                printf("Na posição %d do vetor10 temos o número %d e no vetor50 o mesmo numero na posição %d\n", i+1, array10[i], j+1);
            }
        }
    }

    return 0;

}
