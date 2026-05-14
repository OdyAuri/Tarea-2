#include<stdio.h>
int main() 
{
  int num1, num2, r;
  printf("Ingrese el primer número, solo se sumaran los enteros");
  scanf("%d", &num1);
  printf("Ingrese el segundo número, solo se sumaran los enteros");
  scanf("%d", &num2);
  res=num1+num2;
  printf("La suma de los numeros es %d", &res);
  res=num1-num2;
  printf("La resta de los números es %d", &res);
  res=num1*num2;
  printf("La multiplicacion de los números es %d", &res);
return 0;
}
