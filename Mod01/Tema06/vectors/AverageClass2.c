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

    int maxAssessment = 10, students = 50;
    double assessment01[students], assessment02[students], assessment03[students], averegeStudent[students];
    double sumAssessment01 = 0, sumAssessment02 = 0, sumAssessment03 =0;
    double averegeAssessment01, averegeAssessment02, averegeAssessment03, averegeClass;


    for(int i = 0; i<students;i++) {
        assessment01[i] = rand() % maxAssessment;
        assessment02[i] = rand() % maxAssessment;
        assessment03[i] = rand() % maxAssessment;

        sumAssessment01 += assessment01[i];
        sumAssessment02 += assessment02[i];
        sumAssessment03 += assessment03[i];

        averegeStudent[i] = (assessment01[i]+assessment02[i]+assessment03[i])/3;
    }

//aluno nota1 nota2 nota3 media
    printf("i P1 P2 P3 Media\n");
    for(int i = 0; i<students;i++){
        printf("%d %.2lf %.2lf %.2lf %.2lf\n", i+1, assessment01[i], assessment02[i], assessment03[i], averegeStudent[i]);
    }

    averegeAssessment01 = sumAssessment01/students;
    averegeAssessment02 = sumAssessment02/students;
    averegeAssessment03 = sumAssessment03/students;
    averegeClass = (sumAssessment01 + sumAssessment02 + sumAssessment03)/(3*students);
    printf("\nDados da turma:");
    printf("\nMédia da turma %.2lf", averegeClass);
    printf("\nMédia P1: %.2lf", averegeAssessment01);
    printf("\nMédia P2: %.2lf", averegeAssessment02);
    printf("\nMédia P3: %.2lf\n", averegeAssessment03);









    return 0;
}

