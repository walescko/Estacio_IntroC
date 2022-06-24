#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//
// Created by walescko on 21/06/22.
//
//Em uma turma com 50 alunos, cada um faz 3 provas por semestre.
// Além de armazenar as 3 provas dos 50 alunos, existe a necessidade de mostrar:
//A média de cada prova
//A média de cada aluno
//A média da turma

int main(void) {

    int maxAssessment = 11, students = 50, assessment = 3;
    double assessments[students][assessment], averegeStudent[students];
    double sumAssessment01 = 0, sumAssessment02 = 0, sumAssessment03 = 0, sumAssessments = 0;
    double averegeAssessment01, averegeAssessment02, averegeAssessment03, averegeClass;
    srand((unsigned)time(NULL));

    printf("i P1 P2 P3 Media\n");
    for (int i = 0; i < students; i++) {
        printf("\n%d ", i + 1);
        for (int j = 0; j < assessment; j++) {
            assessments[i][j] = rand() % maxAssessment;
            sumAssessments += assessments[i][j];
            printf("%.2lf ", assessments[i][j]);
            switch (j) {
                case 0:
                    sumAssessment01 += assessments[i][j];
                    break;
                case 1:
                    sumAssessment02 += assessments[i][j];
                    break;
                case 2:
                    sumAssessment03 += assessments[i][j];
                    break;
            }

        }
        averegeStudent[i] = sumAssessments/assessment;
        printf("%.2lf ", averegeStudent[i]);
        sumAssessments = 0;
    }

    averegeClass = (sumAssessment01+sumAssessment02+sumAssessment03)/(3*students);
    averegeAssessment01 = sumAssessment01/students;
    averegeAssessment02 = sumAssessment02/students;
    averegeAssessment03 = sumAssessment03/students;

    printf("\nDados da turma:");
    printf("\nMédia da turma %.2lf", averegeClass);
    printf("\nMédia P1: %.2lf", averegeAssessment01);
    printf("\nMédia P2: %.2lf", averegeAssessment02);
    printf("\nMédia P3: %.2lf\n", averegeAssessment03);

    printf("\n");
    return 0;
}

