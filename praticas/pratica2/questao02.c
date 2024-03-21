#include <stdio.h>

int main(){
float base_do_triangulo;
  float altura_do_triangulo;
  printf(" Entre com a base-do-triangulo:");
  scanf ("%f", &base_do_triangulo);
  printf(" Entre com a altura_do_triangulo:");
  scanf ("%f", &altura_do_triangulo);

  float area_do_triangulo = base_do_triangulo * altura_do_triangulo / 2;
  printf ( "%f\n" , area_do_triangulo);
  
return 0;
}