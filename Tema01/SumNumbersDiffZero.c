#include <stdio.h>
//
// Created by walescko on 31/05/22.
//
int main(void){

    int number01, number02;
    int sumNumbers;

    printf("\nEntre com o primeiro número inteiro: ");
    scanf("%d", &number01);
    printf("\nEntre com o segundo número inteiro: ");
    scanf("%d", &number02);


        do {
            printf("\nEntre com o primeiro número inteiro: ");
            scanf("%d", &number01);
            printf("\nEntre com o segundo número inteiro: ");
            scanf("%d", &number02);

        } while (number01 == 0 || number02 == 0);

        sumNumbers = number01 + number02;
        printf("\n%d + %d = %d", number01, number02, sumNumbers);
   return 0;
}
