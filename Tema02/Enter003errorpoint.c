#include <stdio.h>
//
// Created by walescko on 04/06/22.
//
//com erro na leitura do segundo caracter

void main(){

    char char01, char02;

    printf("\nEntre com um duas letras:\n");
    scanf("%c", &char01);
    scanf("%c", &char02);

    printf("As letras digitadas foram %c e %c", char01, char02);

    printf("\nEnd");
}
