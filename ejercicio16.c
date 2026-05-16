#include <stdio.h>

int main() {
    int arreglo[100];
    int num= 2;
    for (int i = 0; i < 100; i++) 
    {
        arreglo[i] = num;
        num = num + 2;
    }
    printf("Los 100 primeros números pares\n\n");
    for (int i = 0; i < 100; i++) 
    {
        printf("%d ", arreglo[i]);
        if ((i + 1) % 10 == 0) 
        {
            printf("\n");
        }
    }
    return 0;
}
