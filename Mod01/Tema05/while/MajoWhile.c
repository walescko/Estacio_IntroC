#include <stdio.h>
//
// Created by walescko on 11/06/22.
//
int main(void){

    int numero, maior=0, i=5;

    printf("\nEntre com um número: ");
    scanf("%d", numero);

    while(i <= 5){
        if (maior < numero){
            maior = numero;
        }
        printf("\nEntre com um número: ");
        scanf("%d", &numero);
    }
    printf("\n")
}
