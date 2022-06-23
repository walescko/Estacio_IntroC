#include <stdio.h>
//
// Created by walescko on 23/06/22.
//

int main(void){

    int n = 5, m = 5;
    int unique[n][m];

    for(int i = 0; i < n; i++) {
        printf("\n");
        for(int j = 0; j<m; j++){
            if(i==j){
                unique[i][j]=0;
            } else {
                unique[i][j]=1;
            }
            printf("%d ", unique[i][j]);
        }
    }
    printf("\n");
    return 0;
}
