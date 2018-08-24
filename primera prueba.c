#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x,a,b,y,res;
    
  printf("Introduzca el valor en x=");
  scanf("%d",&x);
  printf("Introduzca el valor en y=");
  scanf("%d",&y);
  printf("Introduzca el valor en a=");
  scanf("%d",&a);
  printf("Introduzca el valor en b=");
  scanf("%d",&b);
  
  res=(x+y)*(x+y)*(a-b);

printf("El resultado de la operacion es:%d\n", res);
  system("PAUSE");	
  return 0;
}
