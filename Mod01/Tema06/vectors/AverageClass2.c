#include <stdio.h>
#include <stdlib.h>
//
// Created by walescko on 21/06/22.
//
//Em uma turma com 50 alunos, cada um faz 3 provas por semestre.
// Além de armazenar as 3 provas dos 50 alunos, existe a necessidade de mostrar:
//A média de cada prova
//A média de cada aluno
//A média da turma

int main(void){


    double assessment01[50], assessment02[50], assessment03[50], averegeStudent[50];
    double sumAssessment01 = 0, sumAssessment02 = 0, sumAssessment03 =0;
    double averegeAssessment01, averegeAssessment02, averegeAssessment03, averegeClass;
    int maxAssessment = 10;

    for(int i = 0; i<50;i++) {
        assessment01[i] = rand() % maxAssessment;
        assessment02[i] = rand() % maxAssessment;
        assessment03[i] = rand() % maxAssessment;

        sumAssessment01 += assessment01[i];
        sumAssessment02 += assessment02[i];
        sumAssessment03 += assessment03[i];

        averegeStudent[i] = (assessment01[i]+assessment02[i]+assessment03[i])/3;
    }

//aluno nota1 nota2 nota3 media
    printf("i N1 N2 N3 Media\n");
    for(int i = 0; i<50;i++){
        printf("%d %.2lf %.2lf %.2lf %.2lf\n", i+1, assessment01[i], assessment02[i], assessment03[i], averegeStudent[i]);
    }

    







    return 0;
}

