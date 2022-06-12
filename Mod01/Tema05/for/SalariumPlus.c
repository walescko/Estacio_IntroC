#include <stdio.h>
//
// Created by walescko on 08/06/22.
//
int main(void){

    float salarium, salariumNew, aumento, majorSalarium;

    printf("\nEntre com o percentual de aumento em %: ");
    scanf("%f", &aumento);

    for(int i=0; i<10;i++){

        printf("\nEntre com o valor do salário do funcionario %dº R$ ", i+1);
        scanf("%f", &salarium);
        salariumNew = (1+(aumento/100))*salarium;
        printf("Salario novo é R$ %.2f", salariumNew);

        if(salariumNew >= majorSalarium){
            majorSalarium = salariumNew;
        }
    }
    printf("\nO maior salário é R$ %.2f\n", majorSalarium);

    return 0;
}