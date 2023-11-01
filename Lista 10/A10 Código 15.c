#include <stdio.h>
int main() {
  // Declaração de variáveis
  int v[10], v1[10], v2[10];

  // Preenchimento do vetor
  printf("Preencha o Vetor!\n\n");

  for (int i = 0; i < 10; i++) {
    printf("Digite um número: ");
    scanf("%d", &v[i]);
  }

  // Inicialize os índices de v1 e v2
  int impar = 0;
  int par = 0;

  // Cálculo
  for (int i = 0; i < 10; i++) {
    if (v[i] % 2 != 0) {
      v1[impar] = v[i];
      impar++;
    } else {
      v2[par] = v[i];
      par++;
    }
  }

  // Saída de Dados
  printf("\nElementos utilizados de v1: ");
  
  for (int i = 0; i < impar; i++) {
    printf("%d ", v1[i]);
  }
  
  printf("\n");

  printf("Elementos utilizados de v2: ");
  
  for (int i = 0; i < par; i++) {
    printf("%d ", v2[i]);
  }
  
  printf("\n");
}