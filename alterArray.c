#include <stdio.h>
#include <stdlib.h>

// Alterar conteúdo do array
void main(){

    int i;
    int num1[10];

    for(i = 0; i < 10; i++){
        printf("Digite o elemento [%d] do array: ", i);
        scanf("%d", &num1[i]);
    }

    for(i = 0; i < 10; i++)
        num1[i] = num1[i] * 3;

    printf("\n\n");
    for(i = 0; i < 10; i++){
        printf("Elemento [%d] = %d\n", i, num1[i]);
    }

    return 0;
}
