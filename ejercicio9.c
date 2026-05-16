#include <stdio.h>
int main() {
    int numero = 0;

    printf("¿De qué número se desea obtener la tabla de multiplicar? \n");
    scanf("%d", &numero);

    printf("\nTABLA DEL %d\n", numero);
    
    for (int i = 1; i <= 10; i++) 
    {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    return 0;
}
