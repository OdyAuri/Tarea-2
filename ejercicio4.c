#include <stdio.h>
void main ()
{
double d=0, p=0;
  do 
  {
  printf("La taza de interes del banco es de 6.08%");
  printf("Ingrese la cantidad de dinero a invertir \n");
  scanf("%lf", &d);
  }
  while (d<=0);
  p = d+(d*0.0608);
  printf("la cantidad de dinero recibido sera de: \n %lf", p);
}
