#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Gerar n�meros aleat�rios para preencher o array
void main(){

    int i;
    int num1[10];

    srand(time(NULL));

    for(i = 0; i < 10; i++)
        num1[i] = rand();

    printf("\n\n");
    for(i = 0; i < 10; i++)
        printf("%d ", num1[i]);
    printf("\n\n");

    return 0;
}
