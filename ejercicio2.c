#include <stdio.h>
#define pi 3.14159
void main () 
{
 int r=0;
 double a=0, c=0;
  printf("Escriba la magnitud del radio \n");
  scanf("%d", &r);
  a=(r*r)*pi;
  c=2*pi*r;
  printf("El area de la circunferencia es %.2f \n", a);
  printf("La circunferencia es %.2f", c); 
}
