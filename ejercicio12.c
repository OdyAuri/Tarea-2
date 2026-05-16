#include <stdio.h>

int main() {
    int n = 0, cont = 1;
    long long res = 1;
    do
        {
        printf("Ingrese la cantidad de números naturales que quiere ejecutar \n");
        scanf("%d", &n);
        }
    while (n<=0);

    while (cont <= n) 
    {
        res = res*cont;
        cont++;
    }

    printf("El producto de los primeros %d numeros naturales es: \n %lld\n", n, res);
    return 0;
}
