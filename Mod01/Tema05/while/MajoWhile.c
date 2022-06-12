#include <stdio.h>
//
// Created by walescko on 11/06/22.
//
int main(void){

    int numero, maior=0;
    int i = 0; //variavel de controle do while

    printf("\nEntre com um número: ");
    scanf("%d", &numero);

    while(i < 4){//cheiro de gambiarra
        if (maior < numero){
            maior = numero;
        }
        printf("\nEntre com um número: ");
        scanf("%d", &numero);
        i++;
    }
    printf("\nO maior número digitado foi %d", maior);
    printf("\nEnd\n");
    
    return 0;
}
