#include <stdio.h>
#include <stdio_ext.h>
//
// Created by walescko on 21/06/22.
//
//Leia uma sequência de letras, terminada na letra (”z”),
//e mostre quantas vezes cada vogal (a, e, i, o, u) apareceu.
int main(void){

    char letter;
    int vogals[5] = {0, 0, 0, 0,0};

    do{
        printf("\nDigite uma letra (z para encerrar): ");
        scanf("%c", &letter);
        __fpurge(stdin);

        switch (letter) {
            case 'a':
                vogals[0]++;
                break;
            case 'e':
                vogals[1]++;
                break;
            case 'i':
                vogals[2]++;
                break;
            case 'o':
                vogals[3]++;
                break;
            case 'u':
                vogals[4]++;
                break;
        }

    }while(letter != 'z');

    printf("\nCada vogal apareceu:\n");
    for(int i = 0; i<5;i++) {
        printf(" %d\n", vogals[i]);
    }


    return 0;
}