#include <stdio.h>
//
// Created by walescko on 07/06/22.
//
int main(void){

    double nota, soma, media;

    for(int i=0; i<4; i++){
        soma = 0;
        printf("\nEntre com as notas do %dº Aluno", i+1);
        for(int j = 0; j <3; j++) {
            printf("\nNota %d: ", j+1);
            scanf("%lf", &nota);
            soma = soma + nota;
        }
        media = soma/3;
        printf("\nMedia %.2lf", media);
        if(media >=7.00){
            printf("\nAprovado\n");
        } else {
            printf("\nEm Exame\n");
        }
    }
    return 0;
}

