#include <stdio.h>

int main() {
    int tam = 0, buscar =0, cont = 0;
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

    printf("\n¿Qué número deseas buscar dentro del arreglo?: ");
    scanf("%d", &buscar);

    for (int i = 0; i < tam; i++) 
    {
        if (arreglo[i] == buscar) 
        {
            cont++;
        }
    }

    printf("\nEl número %d se encuentra %d veces dentro del arreglo\n", buscar, cont);
    return 0;
}
