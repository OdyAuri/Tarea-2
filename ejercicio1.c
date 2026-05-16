#include <stdio.h>
void main() 
{
  int num1=0;
  int num2=0;
  int res=0;
  do 
  {
    printf("\n Ingrese el primer número, solo se sumaran los enteros \n");
    scanf("%d", &num1);
  }
  while (num1<=0); 
  do
  {
  printf("\n Ingrese el segundo número, solo se sumaran los enteros \n");
  scanf("%d", &num2);
  }
  while (num2<=0);
  
    res=num1+num2;
  printf("\n La suma de los numeros es: \n %d", &res);
    res=num1-num2;
  printf("\n La resta de los números es: \n %d", &res);
    res=num1*num2;
  printf("\n La multiplicacion de los números es: \n %d", &res);
}
