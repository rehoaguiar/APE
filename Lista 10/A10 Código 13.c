#include <stdio.h>
#include <math.h>

int main() {
  int n = 10; // Número de elementos no vetor
  double v[n]; // Vetor de entrada
  double media = 0.0, desvioPadrao = 0.0;

  // Preencha o vetor com os valores
  for (int i = 0; i < n; i++) {
    printf("Digite o valor %d: ", i + 1);
    scanf("%lf", &v[i]);
    media += v[i];
  }

  // Calcule a média
  media /= n;

  // Calcule a soma dos quadrados das diferenças
  for (int i = 0; i < n; i++) {
    desvioPadrao += (v[i] - media) * (v[i] - media);
  }

  // Divida pelo número de elementos
  desvioPadrao /= n;

  // Calcule a raiz quadrada para obter o desvio padrão
  desvioPadrao = sqrt(desvioPadrao);

  printf("Média: %lf\n", media);
  printf("Desvio Padrão: %lf\n", desvioPadrao);
}