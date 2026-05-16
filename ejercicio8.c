#include <stdio.h>

int main() {
    int num1 = 0, num2 = 0, residuo = 0;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    if (num1 == 0 || num2 == 0) 
    {
        printf("El cero no puede ser divisor\n");
        return 0;
    }

    residuo = num2 % num1; 

    if (residuo == 0)
    {
        printf("%d es divisor de %d \n", num1, num2);
    } 
    else 
    {
        residuo = num1 % num2;
        
        if (residuo == 0) 
        {
            printf("%d es divisor de %d \n", num2, num1);
        } 
        else 
        {
            printf("Ninguno es divisor del otro \n");
        }
    }

    return 0;
}
