#include <stdio.h>
//
// Created by walescko on 06/06/22.
//
int main(void) {

    int n = 0; //isso aqui nao é uma boa pratica, mas essa variavel é o limite.
    int sum = 0;
    float media;

    printf("\nSoma dos numeros de 1 a n-esimo");
    printf("\nAte que numero deseja somar e obter a media: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        sum = sum + (i + 1);
    }

    media = sum / n;

    printf("A soma dos numeros de 1 a %d é %d\n", n, sum);
    printf("A media dos numeros de 1 a %d é %.2f\n", n, media);
    return 0;
}
