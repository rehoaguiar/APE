#include <stdio.h>

float totalGasto() {
  float total;
  printf("Digite o total gasto: ");
  scanf("%f", &total);
  return total;
}

void pagamentoA(float total) {
  printf("Opção: à vista com 10%% de desconto\n");
  float precoPago = total - (total * 0.1);
  printf("Valor total a ser pago: %.2f\n", precoPago);
}

void pagamentoB(float total) {
  printf("Opção: em duas vezes (Preço da etiqueta)\n");
  float parcela = total / 2;
  printf("Valor da 1ª parcela: %.2f\n", parcela);
  printf("Valor da 2ª (E última) parcela: %.2f\n", parcela);
  printf("Valor total da compra: %.2f\n", total);
}

void pagamentoC(float total) {
  printf("Opção: de 3 até 10 vezes com 3%% de juros ao mês (somente para compras acima de R$ 100,00)\n");

  if (total >= 100) {
    int parcelas;
    printf("Em quantas vezes você deseja parcelar a sua compra? ");
    scanf("%d", &parcelas);
    printf("\n");


    if (parcelas >= 3 && parcelas <= 10) {
      float juros = (total * 0.03 * parcelas);
      float precoPago = total + juros;

      for (int i = 1; i <= parcelas; i++) {
        printf("Valor da %dª parcela: %.2f\n", i, precoPago / parcelas);
      }
      printf("O valor total da compra foi de: %.2f\n", precoPago);
    } else {
      printf("\nA quantidade de parcelas é inválida, favor escolher uma dentro do limite fornecido! (3 - 10)\n");
    }
  } else {
    printf("\nNão é possível parcelar o valor da sua compra, visto que ele é inferior a R$ 100,00\n");
  }
}

int opcoesCompra() {
  int opcao;
  printf("Escolha a opção de pagamento:\n");
  printf("1. À vista com 10%% de desconto\n");
  printf("2. Em duas vezes (Preço da etiqueta)\n");
  printf("3. De 3 até 10 vezes com 3%% de juros ao mês (para compras acima de R$ 100,00)\n");
  printf("\nDigite o número da opção desejada: ");
  scanf("%d", &opcao);
  return opcao;
}

int main() {
  float total = totalGasto();
  printf("\n");
  int opcao = opcoesCompra();

  switch (opcao) {
  case 1:
    printf("\n");
    pagamentoA(total);
    break;
  case 2:
    printf("\n");
    pagamentoB(total);
    break;
  case 3:
    printf("\n");
    pagamentoC(total);
    break;
  default:
    printf("Favor escolher uma opção válida!\n");
  }
}