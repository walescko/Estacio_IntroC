#include <stdio.h>
//
// Created by walescko on 28/05/22.
//
int main(void){

    //declarate variables
    float heigth, weight; //remember in english - altura e peso
    float imc;

    //enter data/values
    printf("\nEntre com o peso em kg: ");
    scanf("%f", &weight);
    printf("\nEntre com a altura em metros: ");
    scanf("%f", &heigth);

    //calc imc
    imc = weight/(heigth*heigth);

    //decision
    printf("O IMC é %f\n", imc);
    if (imc < 18.5){
        printf("\nVocê está abaixo do peso\n");
    } else {
        printf("\nVocê não está abaixo do peso\n");
    }
    return 0;

}
