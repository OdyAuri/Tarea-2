#include <stdio.h>

int main() {
    int numero = 0;
    int positivos = 0;
    int negativos = 0;
    int nulos = 0;

    printf("Introduzca 100 numeros enteros\n\n");

    for (int i = 1; i <= 100; i++) 
    {
        printf("Introduzca el numero %d: ", i);
        scanf("%d", &numero);

        if (numero > 0) {
            positivos++;
        } 
        else if (numero < 0) {
            negativos++;
        } 
        else {
            nulos++;
        }
    }
    printf("Conteo final:\n\n");
    printf("Numeros Positivos: %d\n", positivos);
    printf("Numeros Negativos: %d\n", negativos);
    printf("Numeros Nulos (Ceros): %d\n", nulos);
    return 0;
}
