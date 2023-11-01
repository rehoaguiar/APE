#include <stdio.h>

int main() {
  // Declaração de variáveis
  int vetor[10], num, primo = 0;

  // Preenchimento do vetor
  printf("Preencha os valores do vetor.\n\n");

  for (int i = 0; i < 10; i++) {
    printf("Digite um número: ");
    scanf("%d", &num);
    vetor[i] = num;

    int resultado = 0;

    for (int j = 2; j <= num / 2; j++) {
      if (num % j == 0) {
        resultado++;
        break;
      }
    }

    if (resultado == 0 && num > 1) {
      primo++;
    }
  }

  // Exibir os resultados
  printf("\nNúmeros primos e suas posições no vetor:\n");
  for (int i = 0; i < 10; i++) {
    int resultado = 0;

    for (int j = 2; j <= vetor[i] / 2; j++) {
      if (vetor[i] % j == 0) {
        resultado++;
        break;
      }
    }

    if (resultado == 0 && vetor[i] > 1) {
      printf("%d é um número primo e está localizado na posição %d\n", vetor[i], i+1);
    }
  }
}