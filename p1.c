#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    const float pi=3.1416;
    
  float r,h,l,a,v;
  printf("Ingrese el valor del radio:\n", r);
  scanf("%f", &r);
  printf("Ingrese el valor de la altura:\n", h);
  scanf("%f", &h);
  printf("Ingrese el valor del lado:\n", l);
  scanf("%f", &l);

  a=2*pi*r*l/2+pi*r*r;
  v=1/3*pi*r*r*h;
  
  printf("El resultado del area es:%f\n", a);
  printf("El resultado del volumen es:%f\n", v);
  
  scanf("%f", a);
  system("PAUSE");	
  return 0;
}
