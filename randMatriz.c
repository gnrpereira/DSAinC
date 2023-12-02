#include <stdio.h>
#include <time.h>

// Gerar numeros aleatórios para preencher uma matriz?
int main(){

    int i, j;
    int mat1[3][3] = {11,12,13,14,15,16,17,18,19};


    srand(time(NULL));

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            mat1[i][j] = 1 + rand() % 99;
        }
    }

    for(i = 0; i < 3; i++){
        printf("\n\t");
        for(j = 0; j < 3; j++){
            printf("%2d ", mat1[i][j]);
        }
    }

    return 0;
}
