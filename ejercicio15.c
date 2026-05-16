#include <stdio.h>

int main() 
{
    int tam = 0;
    int positivos = 0;
    int negativos = 0;
    int nulos = 0;

    do
    {
        printf("¿Cuántos números se almacenaran?\n");
        scanf("%d", &tam);
    }
    while (tam <= 0);

    int arreglo[tam]; 
    printf("\n Llenando arreglo\n");
    for (int i = 0; i < tam; i++) 
    {
        printf("Introduce el valor para la posición [%d]: ", i);
        scanf("%d", &arreglo[i]);
    }
    for (int i = 0; i < tam; i++) 
    {
        if (arreglo[i] > 0) 
        {
            positivos++;
        } 
        else if (arreglo[i] < 0) 
        {
            negativos++;
        } 
        else 
        {
            nulos++;
        }
    }
    printf("Números positivos: %d\n", positivos);
    printf("Números negativos: %d\n", negativos);
    printf("Nulos: %d\n", nulos);

    return 0;
}
