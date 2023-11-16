#include <stdio.h>

int validaSalario(){
  int pecas;
  
  printf("\n………………………………………………………………………………");
  do{
    printf("\n\nDigite a quantidade de peças fabricadas no mês atual (Não serão aceitos números negativos): ");
    scanf("%d", &pecas);
  } while(pecas < 0); 
  return pecas;
}

float calculaSalario(int pecas) {
  float bonus;
  int novasPecas;
  float salario;
  
  if (pecas > 50 && pecas <= 80){
    novasPecas = pecas - 50;
    bonus = novasPecas * 0.5;
  } else if (pecas > 80) {
    novasPecas = pecas - 80;
    bonus = (novasPecas * 0.75) + (30 * 0.5);
  } else {
    bonus = 0;
  }

  salario = 600 + bonus;
  return salario;
}

void mostraFinal(float salario){
  printf("\n\nO salário final do funcionário é de: R$%.2f reais\n ", salario);
}

int main(){
  int pecas, opcao;
  float salario;

  do {
    printf("\n………………………………………………………………………………\n");

    // Apresentação
    printf("\nSeja bem-vindo(a) à calculadora de salários!\n");

    // Tutorial
    printf("Caro gestor(a), nosso sistema funciona de maneira simples e intuitiva! Seguem as opções:");

    printf("\n\n1: Calcular novo salário\n");
    printf("0: Encerrar o  programa\n");
    printf("\nQual opção deseja escolher? ");
    scanf("%d", &opcao);

    pecas = validaSalario();
    salario = calculaSalario(pecas);
    mostraFinal(salario);
  } while (opcao == 1);
}