#include <stdio.h>
//
// Created by walescko on 11/06/22.
//
int main(void){

    int numero;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &numero);

    while (numero != 0){
        printf("\nO número diditado é %d\n", numero);
        printf("\nDigite outro número: ");
        scanf("%d", &numero);
    }

    printf("\nEnd\n");
    return 0;
}
