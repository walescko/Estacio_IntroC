#include <stdio.h>
#include <string.h>
//
// Created by walescko on 19/06/22.
//
int main(void){

    char teste[6];

    printf("\nDigite 5 letras: ");
    scanf("%s", teste);
    getchar();
    printf("\nOs caracteres digitados foram: %s\n", teste);


    return 0;
}