#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416
const float g=9.81;
float H=12; // float Marca numeros reales
int variable; 
void funcion(){
     static int cuenta=0; //static actua como asociar grupos en este caso junta cuenta como global a local
     cuenta=cuenta+1;
     variable=11;
  printf("variable=%d\n",variable);
printf("funcion():%f\ncuenta=|%-5d|\n",H,cuenta); //%d marca valores enteros

     }
int main(int argc, char *argv[])
{ //todo escrito adelante es de tipo local
  variable=10;
  printf("variable=%d\n",variable);
  printf("variable=%d\n",variable);
  float area;
  float radio;
  funcion();
  dummy();
  printf("H=%fIngrese el valor del radio de una\
  circunferencia:",H);
  H=12.1;
  printf("H=|%-10.6f|\n",H);
  funcion();
  //scanf("%f",&radio);
  //printf("El \'area de la circunferencia es: %f\n\n", 
    //      PI*radio*radio);
          
  system("PAUSE");	
  return 0;
}
