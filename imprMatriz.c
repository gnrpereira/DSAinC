#include <stdio.h>

// Criar uma matriz
int main(){

    int i, j;
    int mat1[3][3] = {1,2,3,4,5,6,7,8,9};
    char mat5[2][2] = {'a','b','c','d'};

    for(i = 0; i < 3; i++){
        printf("\n\t");
        for(j = 0; j < 3; j++){
            printf("%d ", mat1[i][j]);
        }
    }

    return 0;
}
