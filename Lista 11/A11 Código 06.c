#include <stdio.h>

// Função
double calcularIMC(double peso, double altura) {
  return peso / (altura * altura);
}

int main() {
  double peso, altura;
  
  printf("Digite o seu peso em kilos: ");
  scanf("%lf", &peso);

  printf("Altura em Metros: ");
  scanf("%lf", &altura);

  if (peso > 0 && altura > 0) {
    double imc = calcularIMC(peso, altura);
    printf("\nO seu índice de massa corporal é igual a %.2lf\n", imc);
  } else {
    printf("Verifique se você cadastrou um peso ou altura válidos\n");
  }
}