#include <stdio.h>

int main(){
  float valor_da_nota1;
  float valor_da_nota2;
  printf(" Entre com o valor_da_nota1: ");
  scanf ( "%f" , &valor_da_nota1);
  printf(" Entre com o valor_da_nota2: ");
  scanf ( "%f" , &valor_da_nota2);

  float media_final = 0.4 *valor_da_nota1 + 0.6 *valor_da_nota2;
  printf(" %f\n" , media_final);

  return 0;
    }