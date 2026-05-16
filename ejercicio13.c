#include <stdio.h>

int main() {
    int tam = 0;
    int suma = 0;

    do
        {
        printf("¿Cuántos números se almacenaran?\n");
        scanf("%d", &tam);
        }
    while (tam<=0);

    int arreglo[tam]; 
    printf("\n Llenando arreglo\n");
    
    for (int i = 0; i < tam; i++) 
    {
        printf("Introduce el valor para la posición [%d]: ", i);
        scanf("%d", &arreglo[i]);
    }
    for (int i = 0; i < tam; i++) 
    {
        suma = suma + arreglo[i];
    }
    printf("La suma de los %d elementos del arreglo es: %d\n", tam, suma);
    return 0;
}
