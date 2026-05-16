#include <stdio.h>
void main()
{
    int dida=0, dtot=0, test=0; 
    double pago=0;
    do
        {
        printf("Ingrese el número de días de estancia \n");
        scanf("%d", &test);
        }
    while (test<=0);
    
    do
        {
        printf("Ingrese la distancia de ida en kilometros, solo la cantidad\n");
        scanf("%d", &dida);
        }
    while (dida<=0);
    
    dtot=dida*2;
    printf("La distancia total es de %dkm \n", dtot);
    pago=dtot*0.23;
    
    if (test>=7 && dtot>=800)
    {
        printf("Tiene un descuento del 30% \n");
        pago=pago-(pago*0.30);
    }
    printf("Debe pagar $%lf \n", pago);
}
