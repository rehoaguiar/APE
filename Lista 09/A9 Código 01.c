#include <stdio.h>

int main() {
  int a[6] = {1, 0, 5, -2, -5, 7}, soma;

  // Cálculo
  soma = a[0] + a[1] + a[5];
  
  // Saída de dados
  printf("A soma entre o vetor a[1] e o vetor a[5] é de: %d\n\n", soma);

  // Novo valor
  a[4] = 100;

  for (int i = 0; i < 6; i++){
    printf("%d\n", a[i]);
  }
}
