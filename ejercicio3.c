#include <stdio.h>
void main ()
{
double d=0, p=0;
  do 
  {
  printf("Ingrese la cantidad de dolares a convertir \n");
  scanf("%lf", &d);
  }
  while (d<=0);
  p = d*11.96;
  printf("la cantidad de dolares en pesos es: \n %lf", p);
}
