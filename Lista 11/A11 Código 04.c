#include <stdio.h>

// Função
double calcularVolume(double altura, double raio) {
  const double pi = 3.1414592;
  return pi * raio * raio * altura;
}

int main() {
  double altura, raio;

  printf("Digite o raio: ");
  scanf("%lf", &raio);

  printf("Digite a altura: ");
  scanf("%lf", &altura);

  if (raio >= 0 && altura >= 0) {
    double volume = calcularVolume(altura, raio);
    printf("O volume desse cilindro é igual a: %.2lf\n", volume);
  } else {
    printf("Raio e altura não podem ser valores negativos.\n");
  }
}