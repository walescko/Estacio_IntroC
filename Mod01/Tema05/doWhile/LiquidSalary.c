#include <stdio.h>
//
// Created by walescko on 17/06/22.
//
//desenvolva um programa que leia o salário bruto de 15 funcionários de uma empresa,
// calcule e exiba o salário líquido de cada funcionário.
// Lembre-se que o salário líquido é calculado abatendo o imposto do salário bruto,
// com base nesta tabela de imposto.
// Ao final, mostre o total de salários brutos, salários líquidos e impostos de todos os funcionários.
int main(void){

    double salaryBrute, salaryLiquid, saleSalary;
    double sumSalaryLiquid = 0, sumSalaryBrute =0, sumTax =0;
    int i = 0; //controle

    printf("\nSalario Bruto, Salario Liquido, Taxas e impostos");
    do{
        printf("\nEntre com o salário bruto do %dº funcionário", i+1);
        scanf("%lf", &salaryBrute);

        if (salaryBrute <= 999.00){ //10%
            saleSalary = 0.1*salaryBrute;
            salaryLiquid = salaryBrute - saleSalary;
        } if (salaryBrute >= 999.01 && salaryBrute <=1999.00) { //15%
            saleSalary = 0.15*salaryBrute;
            salaryLiquid = salaryBrute - saleSalary;
        } if (salaryBrute >=1999.01 && salaryBrute <= 9999.00){ //20%
            saleSalary = 0.20*salaryBrute;
            salaryLiquid = salaryBrute - saleSalary;
        } if (salaryBrute>= 9999.01 && salaryBrute <= 99999.00){//25%
            saleSalary = 0.25*salaryBrute;
            salaryLiquid = salaryBrute - saleSalary;
        } else {//30%
            saleSalary = 0.30*salaryBrute;
            salaryLiquid = salaryBrute - saleSalary;
        }

        printf("\nO salário liquido do %dº funcionario é R$ %.2lf", i+1, salaryLiquid);
        sumSalaryBrute += salaryBrute;
        sumSalaryLiquid += salaryLiquid;
        sumTax += saleSalary;
        i++;
    } while (i < 5);

    printf("\nA soma dos salários brutos é R$ %.2lf", sumSalaryBrute);
    printf("\nO total dos salários líquidos é R$ %.2lf", sumSalaryLiquid);
    printf("\nO total dos descontos nos salários é R$ %.2lf\n\n", sumTax);

    return 0;
}

