#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float ft=12 ,m= 100 ,in= 2.54 ,yd= 3 ,cm= m/100;
    printf("Inserte el valor para conocer sus valores:");
    
    scanf("%f", &ft);
    
    ft=12*in;
    yd=3*ft;
    in=2.54*cm;
    m=100*cm;
    cm=m/100;
        
    printf("el valor de pulgadas es:%f\n", in);
    printf("el valor de yardas es:%f\n", yd);
    printf("el valor de metros es:%f\n", m);
    printf("el valor de pies es:%f\n", ft); 
    printf("el valor de centimetros es:%f\n", cm);
  
  system("PAUSE");	
  return 0;
}
