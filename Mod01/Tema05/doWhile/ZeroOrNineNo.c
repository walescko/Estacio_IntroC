#include <stdio.h>
//
// Created by walescko on 16/06/22.
//
int main(void){

    int number, sucessor, antecessor;

    do{

        printf("\nDigite um número inteiro (0 ou 9 encerra o programa): ");
        scanf("%d", &number);
        if(number!=9 && number!=0) {
            if (number % 2 == 0) {
                sucessor = number + 1;
                printf("\nO número é par e o seu sucessor é %d", sucessor);
            } else {
                antecessor = number - 1;
                printf("\nO número é impar e o seu antecessor é %d", antecessor);
            }
        }

    } while(number!=0 && number!=9);

    return 0;
}