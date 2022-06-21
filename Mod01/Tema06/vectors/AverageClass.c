#include <stdio.h>
#include <stdlib.h>
//
// Created by walescko on 20/06/22.
//
//Faça um programa que leia a nota de 20 alunos da turma
// e mostre as que são iguais ou superiores à média da turma.

int main(void){

    double notas[20], average = 0, sum = 0;

    for(int i = 0; i<20; i++){
        notas[i] = rand() % 10;
        sum = sum + notas[i];
        printf("\nNota do %dº aluno: %.2lf", i+1, notas[i]);
    }

    average = sum / 20;
    printf("\nMédia da turma: %.2lf\n", average);

    for(int i=0; i<20; i++){
        if(notas[i] >= average){
            printf("O aluno %d está acima da média. Nota %.2lf.\n", i+1, notas[i]);
        } else {
            printf("O aluno %d está abaixo da média. Nota %.2lf.\n", i+1, notas[i]);
        }
    }

    return 0;
}
