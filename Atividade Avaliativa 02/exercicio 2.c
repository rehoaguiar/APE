#include <stdio.h>
#include <string.h>

int classificaSalario(float salario, int *acima, int *abaixo) {
  float salarioMin = 1400.0;
  int classificacao;

  if (salario > salarioMin) {
    classificacao = 1;
    (*acima)++;
  } else if (salario == salarioMin) {
    classificacao = 2;
  } else {
    classificacao = 3;
    (*abaixo)++;
  }

  return classificacao;
}

void mostraSalario(int classificacao, float salario, char sexo[]) {
  printf("\nFuncionário(a) do sexo %s,", sexo);

  if (classificacao == 1) {
    printf(" possui um salário considerado acima do salário mínimo nacional,");
  } else if (classificacao == 2) {
    printf(" possui um salário considerado igual ao salário mínimo nacional,");
  } else {
    printf(" possui um salário considerado abaixo do salário mínimo nacional,");
  }
    
  printf(" no valor de R$%.2f reais\n", salario);
}

int main() {
  int acima = 0, abaixo = 0;
  char sexo[10];
  float salario;

  do {
    printf("\n........................................................\n");
    printf("\nSeja bem-vindo(a) ao registro na carteira profissional!\n");
    printf("Opções:\n");
    printf("1: Cadastrar novo funcionário\n");
    printf("0: Encerrar o programa\n");
    printf("\nEscolha uma opção: ");
    int opcao1;
    scanf("%d", &opcao1);

    if (opcao1 == 0) {
      break;
    }

    printf("\n........................................................\n");
    fflush(stdin);

    do {
      // Validação do Salário
      printf("\nDigite o seu salário: ");
      scanf("%f", &salario);

      if (salario < 1) {
        printf("O salário deve ser maior que R$ 1,00\n");
      }
    } while (salario < 1);

    int contador;
    do {
      // Validação do Sexo
      printf("Digite o seu sexo (F - Feminino | M - Masculino): ");
      scanf(" %c", &sexo[0]);

      switch (sexo[0]) {
      case 'F':
        strcpy(sexo, "Feminino");
          contador = 1;
          break;
        
      case 'M':
        strcpy(sexo, "Masculino");
        contador = 1;
        break;

      default:
        printf("Sexo inválido! Favor digitar uma das letras citadas acima!\n");
        contador = 0;
        break;
      }
    } while (contador == 0);

    // Classifica Salário
    int classificacao = classificaSalario(salario, &acima, &abaixo);

    // Mostra Classificação
    mostraSalario(classificacao, salario, sexo);

    printf("\n........................................................\n");
    
  } while (1);

  // Mostra o resultado final
  printf("\nResumo:\n");
  printf("Quantidade de funcionários abaixo do salário mínimo: %d\n", abaixo);
  printf("Quantidade de funcionários acima do salário mínimo: %d\n", acima);
  
  return 0;
}