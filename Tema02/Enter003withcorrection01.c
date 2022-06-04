#include <stdio.h>
#include <stdio_ext.h> //biblioteca para limpeza do buffer
//
// Created by walescko on 04/06/22.
//

int main(void){

    char char01, char02;

    printf("\nEntre com um duas letras:\n");
    scanf("%c", &char01);
    __fpurge(stdin);//limpeza do buffer
    scanf("%c", &char02);

    printf("As letras digitadas foram %c e %c", char01, char02);

    printf("\nEnd");

    return 0;
}
