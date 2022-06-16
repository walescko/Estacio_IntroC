#include <stdio.h>
//
// Created by walescko on 16/06/22.
//
int main(void){

    int number, major;
    int i; //controle

    do{
        printf("\nDigite um número inteiro: ");
        scanf("%d", &number);
        if (number > major){
            major = number;
        }
        i++;
    } while( i < 5);

    printf("\nO maior número digitado foi %d.\n\n", major);

    return 0;
}