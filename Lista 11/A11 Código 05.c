#include <stdio.h>

// Função
double calcularVolume(double raio) {
  const double pi = 3.1414592;
  return (4/(3*pi)) * raio * raio * raio;
}

int main() {
  double raio;

  printf("Digite o raio: ");
  scanf("%lf", &raio);

  if (raio >= 0) {
    double volume = calcularVolume(raio);
    printf("O volume dessa esfera é igual a: %.2lf\n", volume);
  } else {
    printf("O raio não pode ser um valor negativo.\n");
  }
}