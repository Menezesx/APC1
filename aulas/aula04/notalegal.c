#include <stdio.h>

int main() {
char nome[31];
int quantidade;
  float valor;
  
  printf(" Entre o nome do produto: ");
  int deu_certo = scanf("%[^\n]s", nome);

  printf(" Entre com a qntd do produto: ");
  deu_certo = scanf("%i", &quantidade);
  
  printf(" Entre o valor do produto: ");
  deu_certo = scanf("%f", &valor);

  printf("--------------------------------------\n");
    printf("          NOTA LEGAL                  \n");
    printf("--------------------------------------\n");
      printf("item                QTD VALOR\n");
  printf("%-13s %03i %8.2f\n", "Banana nanica", 1, 15.00);

  return 0;
}