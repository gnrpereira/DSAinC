#include <time.h>

// Gerar números aleatórios para preencher o array
// dentro de um intervalo 1 a 99
void main(){

    int i;
    int num1[40];

    srand(time(NULL));

    for(i = 0; i < 40; i++)
        num1[i] = 1 + rand() % 99;

    printf("\n\n");
    for(i = 0; i < 40; i++)
        printf("%d ", num1[i]);
    printf("\n\n");

    return 0;
}
