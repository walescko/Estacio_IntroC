#include <stdio.h>
#include <stdio_ext.h>
//
// Created by walescko on 16/06/22.
//
int main(void){

    char character;
    int contA = 0, contE = 0, contI = 0, contO = 0, contU = 0;

//    printf("\nDigite uma letra: ");
//    scanf("%c", &character);

    while (character !='.'){

        switch (character) {
            case 'a':
                contA++; break;
            case 'e':
                contE++; break;
            case 'i':
                contI++; break;
            case 'o':
                contO++; break;
            case 'u':
                contU++; break;
        }
        printf("\nDigite uma letra (a..z) ou . para encerrar: ");
        scanf("%c", &character);
        __fpurge(stdin);

        
    }

    printf("\nLetra A digitada %d vezes", contA);
    printf("\nLetra E digitada %d vezes", contE);
    printf("\nLetra I digitada %d vezes", contI);
    printf("\nLetra O digitada %d vezes", contO);
    printf("\nLetra U digitada %d vezes\n", contU);

    return 0;
}
