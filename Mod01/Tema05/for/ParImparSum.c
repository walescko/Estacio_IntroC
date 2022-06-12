#include <stdio.h>
//
// Created by walescko on 09/06/22.
//
int main(void){

    int sumPar=0, sumImpar=0, amount, number;
     printf("\nPares e Impares");

     printf("\nQual a quantidade de números quer digitar? ");
     scanf("%d", &amount);

     for(int i = 0 ; i < amount; i++){
         printf("\nEntre com o %d: ", i+1);
         scanf("%d", &number);
         if(number%2==0){
             sumPar = sumPar + number;
         } else {
             sumImpar = sumImpar + number;
         }
     }

    printf("\nA soma dos números pares é %d", sumPar);
    printf("\nA soma dos numeros impares é %d", sumImpar);

    printf("\nEnd\n");
     return 0;
}
