#include <stdio.h>

void calcularIdade(int diaNasc, int mesNasc, int anoNasc, int diaAtual, int mesAtual, int anoAtual, int *idadeAnos, int *idadeMeses, int *idadeDias) {
  // Cálculo da idade
  *idadeAnos = anoAtual - anoNasc;
  *idadeMeses = mesAtual - mesNasc;
  *idadeDias = diaAtual - diaNasc;

  if (*idadeDias < 0) {
    *idadeMeses--;
    *idadeDias += 30;
  }

  if (*idadeMeses < 0) {
    *idadeAnos--;
    *idadeMeses += 12;
  }
}

int main() {
  int diaNasc, mesNasc, anoNasc, diaAtual, mesAtual, anoAtual;
  int idadeAnos, idadeMeses, idadeDias;

  // Data de nascimento
  printf("Digite sua data de nascimento (DD MM AAAA): ");
  scanf("%d %d %d", &diaNasc, &mesNasc, &anoNasc);

  // Data atual
  printf("Digite a data de hoje (DD MM AAAA): ");
  scanf("%d %d %d", &diaAtual, &mesAtual, &anoAtual);

  // Cálculo
  calcularIdade(diaNasc, mesNasc, anoNasc, diaAtual, mesAtual, anoAtual, &idadeAnos, &idadeMeses, &idadeDias);

  // Impressão da idade
  printf("Idade: %d anos, %d meses e %d dias\n", idadeAnos, idadeMeses, idadeDias);
}