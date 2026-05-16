#include <stdio.h>

int main() 
{
    int numero = 10, suma = 0;

    while (numero <= 50) 
    {
        if (numero % 2 == 0) 
        {
            suma = suma + numero; 
        }
        numero++; 
    }

    printf("La suma de los numeros pares entre 10 y 50 es: %d\n", suma);
    return 0;
}
