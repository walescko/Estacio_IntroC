#include <stdio.h>
#include <stdlib.h>
//
// Created by walescko on 22/06/22.
//
//Faça um algoritmo que leia números inteiros e armazene-os na matriz 4x4.
//Porém, na diagonal principal, não armazene o número lido, e sim um 0 (zero).
int main(void) {

    int n = 4, m = 4;
    int array44[n][m];

    for (int i = 0; i<n; i++) {
        printf("\n");
        for (int j = 0; j < m; j++) {
            if(i==j){
            array44[i][j] = 0;
            } else {
                array44[i][j] = rand()%10;
            }
            printf("%d ", array44[i][j]);
        }
    }

    printf("\n");
    return 0;
}