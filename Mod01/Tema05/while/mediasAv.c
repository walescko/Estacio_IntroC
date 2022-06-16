#include <stdio.h>
//
// Created by walescko on 14/06/22.
//
int main(void){

    double nota01, nota02, nota03, media;
    int i=0;

    printf("\nMedia dos alunos de uma turma");

    while (i < 5){
        printf("\nEntre com as notas do %dº aluno:\n", i+1);
        printf("Nota 1: ");
        scanf("%lf", &nota01);
        printf("Nota 2: ");
        scanf("%lf", &nota02);
        printf("Nota 3: ");
        scanf("%lf", &nota03);

        media = (nota01+nota02+nota03)/3;

        printf("\nA media do %dº aluno é %.2lf\n", i+1, media);
        if(media >=7){
            printf("E o aluno está aprovado!\n");
        } else {
            printf("E o aluno está em exame!\n");
        }
        i++;
        nota01=0;
        nota02=0;
        nota03=0;
    }

    printf("\nEnd\n");
    return 0;
}
