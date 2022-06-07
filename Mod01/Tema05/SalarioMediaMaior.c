#include <stdio.h>
//
// Created by walescko on 07/06/22.
//
int main(void){

    float salarium, majorSalarium = 0, averageSalarium = 0, sumSalarium = 0;

    printf("\nMedia Salarial\n");

    for(int i = 0 ; i<10 ; i++){
        printf("\nEntre com o %d salário: R$ ", (i+1));
        scanf("%f", &salarium);
        if(salarium > majorSalarium){
            majorSalarium = salarium;
        }
        sumSalarium = sumSalarium + salarium;
    }

    averageSalarium = sumSalarium/10;

    printf("\nO maior salario é R$ %.2f", majorSalarium);
    printf("\nA média dos salários é R$ %.2f\n", averageSalarium);

    return 0;
}
