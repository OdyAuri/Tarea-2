#include <stdio.h>
#define pi=3.14159
int main () 
{
 int r, a, c;
  printf("Escriba la magnitud del radio");
  scanf("%d", &r);
  a=pi*(r*r);
  c= 2*pi*r;
  printf("El area de la circunferencia es %d", a);
  printf("La circunferencia es %d", c);
return 0;
}
