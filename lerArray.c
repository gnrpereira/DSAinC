#include <stdio.h>
#include <stdlib.h>

// Ler o input dos elementos do array
void main(){

    int i;
    int num1[10];

    for(i = 0; i < 10; i++){
        printf("Digite o elemento [%d] do array: ", i);
        scanf("%d", &num1[i]);
    }

    printf("\n\n");
    for(i = 0; i < 10; i++){
        printf("Elemento [%d] = %d\n", i, num1[i]);
    }

    return 0;
}
