#include <time.h>

// Gerar números aleatórios para preencher o array
int main(){

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
