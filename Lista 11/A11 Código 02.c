#include <stdio.h>

// Função
void mesDias(int mes){
  switch (mes){
  case 1:
    printf("Janeiro");
    printf("\n31 dias");
    break;
  case 2:
    printf("Fevereiro");
    printf("\n28/29 dias");
    break;
  case 3:
    printf("Março");
    printf("\n31 dias");
    break;
  case 4:
    printf("Abril");
    printf("\n30 dias");
    break;
  case 5:
    printf("Maio");
    printf("\n31 dias");
    break;
  case 6:
    printf("Junho");
    printf("\n30 dias");
    break;
  case 7:
    printf("Julho");
    printf("\n31 dias");
    break;
  case 8:
    printf("Agosto");
    printf("\n31 dias");
    break;
  case 9:
    printf("Setembro");
    printf("\n30 dias");
    break;
  case 10:
    printf("Outubro");
    printf("\n31 dias");
    break;
  case 11:
    printf("Novembro");
    printf("\n30 dias");
    break;
  case 12:
    printf("Dezembro");
    printf("\n31 dias");
    break;
  default:
    printf("Mês inválido, favor digitar um valor dentro do intervalo: 1-12");
  }
}

int main() {
  // Declaração de variáveis
  int mes;

  printf("\nDigite o mês que você deseja consultar: ");
  scanf("%d", &mes);

  printf("\n");
  mesDias(mes);
}