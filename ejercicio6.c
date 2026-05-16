#include <stdio.h>
void main()
{
    double sueldo=0, pago=0;
    do
        {
        printf("Ingrese el monto de su sueldo \n");
        scanf("%lf", &sueldo);
        }
    while (sueldo<=0);
  
    if (sueldo<=1000)
    {
        printf("Tiene un aumento del 15% \n");
        pago=sueldo+(sueldo*0.15);
    }
    else
    {
        printf("Tiene un aumento del 12% \n");
        pago=sueldo+(sueldo*0.12);
    }
    printf("Su nuevo sueldo es %lf \n", pago);
}
