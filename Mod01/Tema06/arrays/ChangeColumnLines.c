#include <stdio.h>
#include <stdlib.h>
//
// Created by walescko on 22/06/22.
//
//Faça um algoritmo que leia uma matriz 4x4 de números inteiros.
// Gere uma segunda matriz, na qual as linhas são as colunas da matriz 1,
// e as colunas são as linhas da matriz 1.
int main(void){

    int n = 4, m = 4;//determina o tamanho da matriz
    int array01[n][m];
    int array02[m][n];

    for(int i = 0; i< n;i++){
//        printf("\n");
        for(int j = 0; j < m; j++){
            array01[i][j] = rand()%10;
            array02[j][i] = array01[i][j];
        }
    }

    for(int i = 0; i<n;i++){
        printf("\n");
        for(int j = 0; j<m; j++){
            printf("%d ", array01[i][j]);
        }
    }


    return 0;
}
