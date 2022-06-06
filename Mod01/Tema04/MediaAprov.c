#include <stdio.h>
//
// Created by walescko on 05/06/22.
//
void main(){

    printf("\nCALCULO DE MEDIA");
    float av1, av2, media;
    printf("\nEntre com o valor de AV1: ");
    scanf("%f", &av1);
    printf("\nEntre com o valor de AV2: ");
    scanf("%f", &av2);

    media = (av1 + av2)/2.0;

    if( media >= 7){
        printf("\nAluno aprovado!");
    } else {
        printf("\nAluno reprovado");
    }

}