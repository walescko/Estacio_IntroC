#include <stdio.h>
#include <stdlib.h>
//
// Created by walescko on 22/06/22.
//
//Faça um algoritmo que leia dados inteiros e armazene-os em uma matriz 3x4.
// Em seguida, mostre a quantidade de números pares e ímpares armazenados na matriz.
int main(void){

    int n = 3, m=4;
    int array34[n][m];

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            array34[i][j] = rand()%10;
        }
    }

    for(int i = 0; i<n; i++){

        for(int j = 0; j<m; j++){
            printf("%d ", array34[i][j]);
        }
        printf("\n");
    }



    return 0;
}