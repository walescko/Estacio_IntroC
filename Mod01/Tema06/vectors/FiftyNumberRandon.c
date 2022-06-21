#include <stdio.h>
#include <stdlib.h>
//
// Created by walescko on 21/06/22.
//
//Faça um algoritmo que leia 50 números inteiros e armazene-os em um vetor.
//Copie para um segundo vetor de 50 números inteiros cada elemento do primeiro,
//observando as seguintes regras:
//    Se o número for par, preencha a mesma posição do segundo vetor
//    com o número sucessor do contido na mesma posição do primeiro vetor.
//
//    Se o número for ímpar, preencha a mesma posição do segundo vetor
//    com o número antecessor do contido na mesma posição do primeiro vetor.
//
//Ao final, mostre o conteúdo dos dois vetores simultaneamente.

int main(void){

    int numbers01[50], numbers02[50];

    for(int i=0; i<50; i++){
        numbers01[i]= rand()%500;
    }

    for(int i=0; i<50; i++){
        if(numbers01[i]%2 == 0){
            numbers02[i] = numbers01[i]+1;
        } else {
            numbers02[i] = numbers01[i]-1;
        }
    }

    printf("\ni  V1  V2\n");
    for(int i=0; i<50; i++){
        printf("%d %d %d\n", i+1, numbers01[i], numbers02[i]);
    }

    return 0;
}
