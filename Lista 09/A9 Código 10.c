#include <stdio.h>
int main() {
  int notas[15], soma = 0;
  float mediaGeral = 0;

  // Entrada de Dados  
  for(int i = 0; i < 15; i++){
    printf("Digite a nota: ");
    scanf("%d", &notas[i]);
    soma += notas[i];
  }

  // Cálculo
  mediaGeral = soma/15;
  
  // Saída de dados
  printf("\nA média das notas dos 15 alunos é igual a %.2f", mediaGeral);
}
