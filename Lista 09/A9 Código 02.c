#include <stdio.h>

int main() {
  int num[6];

  // Entrada de Dados
  for(int i = 0; i < 6; i++){
    printf("Digite o valor do número escolhido: ");
    scanf("%d", &num[i]);
  }
  
  // Saída de dados
  for (int i = 0; i < 6; i++){
    printf("\n%d", num[i]);
  }
}
