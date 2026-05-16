#include <stdio.h>
void main ()
{
double d=0, tasa=0;
  do 
  {
  printf("La taza de interes del banco es de 5%")
  printf("Ingrese la cantidad de dinero a invertir \n");
  scanf("%lf", &d);
  }
  while (d<=0);
  p = d*11.96;
  printf("la cantidad de dolares en pesos es: \n %lf", p);
}
