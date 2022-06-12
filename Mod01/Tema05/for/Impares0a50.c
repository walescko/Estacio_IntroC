#include <stdio.h>
//
// Created by walescko on 06/06/22.
//
int main(void){

    printf("\nImpares de 1 a 50\n");

    for(int i = 0; i < 50; i++){
        int number01 = i + 1;
        if( number01 % 2 == 1 ){
            printf("%d ", number01);
        }
    }
    printf("\nEnd\n");
    return 0;
}