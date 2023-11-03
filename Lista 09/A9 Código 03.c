#include <stdio.h>

int main() {
  int num[10], quadradoNum[10];

  // Entrada de Dados
  for(int i = 0; i < 10; i++){
    printf("Digite o valor do número escolhido: ");
    scanf("%d", &num[i]);
    quadradoNum[i] = num[i] * num[i];
  }

  // Saída de dados
  for (int i = 0; i < 10; i++){
    printf("\n%d", quadradoNum[i]);
  }
}
