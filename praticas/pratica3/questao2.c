#include <stdio.h>
int main() {
  float valor_bruto,desconto, valor_final;
  printf("Digite o valor bruto:");
  scanf("%f",&valor_bruto);
  if(valor_bruto <= 100.00){
    desconto = valor_bruto * 0.01;
  }else if (valor_bruto <= 500.00){
    desconto = valor_bruto * 0.05;
  }else{
    desconto = valor_bruto * 0.10;
  }
  valor_final = valor_bruto - desconto;
  printf("O desconto aplicado é de : %.2f\n",desconto);
  printf("O valor final é de : %.2f\n",valor_final);
  return 0;
}