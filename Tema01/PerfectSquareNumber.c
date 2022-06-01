#include <stdio.h>
#include <math.h>
//
// Created by walescko on 28/05/22.
//
int main(void){

    double number;
    double squareNumber;

    printf("\nEntre com um valor inteiro: ");
    scanf("%lf", &number);

    squareNumber = sqrt(number);

    printf("\nA raiz quadrada de %.2lf e %lf\n", number, squareNumber);

    double test = squareNumber - (int) squareNumber;

    if (test == 0){
        printf("O número é um quadrado perfeito!\n");
    } else {
        printf("O número não é um quadrado perfeito!\n");
    }
    return 0;
}