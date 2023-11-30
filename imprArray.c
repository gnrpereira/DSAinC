#include <stdio.h>
#include <stdlib.h>

// Imprimir elementos do array
void main(){

    int i;
    int num1[5] = {1, 2, 5, 9, 6};
    char vogais[] = {'a','e','i','o','u'};
    float notas[3] = {8.5, 6.7, 9.2};


    for(i = 0; i < 5; i++)
        printf("%d ", num1[i]);

    printf("\n\n");
    for(i = 0; i < 5; i++)
        printf("%c ", vogais[i]);

    printf("\n\n");
    for(i = 0; i < 3; i++)
        printf("%.2f ",
                notas[i]);

    return 0;
}
