#include <stdio.h>
void main()
{
    double compra=0, pago=0;
    do
        {
        printf("Ingrese el monto de su compra \n");
        scanf("%lf", &compra);
        }
    while (compra<=0);
   
    pago=compra;
    
    if (compra>=2500)
    {
        printf("¡Tiene un descuento del 8%!\n");
        pago= compra-(compra*0.08);
    }
    printf("El total a pagar es de %lf \n",pago);
}
