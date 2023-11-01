#include <stdio.h>

// Protótipo de função
void converter(fahrenheit){
  int celsius = (fahrenheit - 32) * 5 / 9;
  
  // Saída de Dados
  printf("\nA conversão do valor de %dF° é igual a %dC°", fahrenheit, celsius);
}

int main() {
  // Declaração de variáveis
  int fahrenheit;

  printf("\nDigite a temperatura em Fahrenheit: ");
  scanf("%d", &fahrenheit);

  converter(fahrenheit);
}