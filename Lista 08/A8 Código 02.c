#include <stdio.h>

int main() {
  int moradores = 0;
  int elevadorA = 0, elevadorB = 0, elevadorC = 0;
  int manha = 0, tarde = 0, noite = 0;

  // Entrada de Dados
  while (moradores < 50) {
    char periodo, elevador;
    printf("Resposta do morador %d:\n", moradores++);
    printf("Qual é o elevador que você mais utiliza no seu dia a dia (A, B ou C)? ");
    scanf(" %c", &elevador);

    switch (elevador) {
      case 'A':
        elevadorA++;
        break;
      case 'B':
        elevadorB++;
        break;
      case 'C':
        elevadorC++;
        break;
      default:
        printf("Elevador inválido! Tente novamente com um valor válido.\n");
        continue; // Repete a pergunta para o mesmo morador
      }

    printf("Em qual período você mais utiliza o elevador (M, V ou N)? ");
    scanf(" %c", &periodo);

    switch (periodo) {
      case 'M':
        manha++;
        break;
      case 'V':
        tarde++;
        break;
      case 'N':
        noite++;
        break;
      default:
        printf("Período inválido! Tente novamente com um valor válido.\n");
        continue; // Repete a pergunta para o mesmo morador
      }
      moradores++;
    }
  
  // Encontrar o elevador mais frequentado
  char elevadorMaisFrequentado;
  int maxUsoElevador = elevadorA;

  if (elevadorB > maxUsoElevador) {
    maxUsoElevador = elevadorB;
    elevadorMaisFrequentado = 'B';
  }

  if (elevadorC > maxUsoElevador) {
    maxUsoElevador = elevadorC;
    elevadorMaisFrequentado = 'C';
  }

  // Encontrar o período mais usado de todos
  char periodoMaiorUso;
  int maxUsoPeriodo = manha;

  if (tarde > maxUsoPeriodo) {
    maxUsoPeriodo = tarde;
    periodoMaiorUso = 'V';
  }

  if (noite > maxUsoPeriodo) {
    maxUsoPeriodo = noite;
    periodoMaiorUso = 'N';
  }

    // Calcular a diferença percentual entre o mais usado e o menos usado
    int minUsoPeriodo = manha;

    if (tarde < minUsoPeriodo) {
      minUsoPeriodo = tarde;
    }

    if (noite < minUsoPeriodo) {
      minUsoPeriodo = noite;
    }

  float diferencaPercentual = ((float)(maxUsoPeriodo - minUsoPeriodo) / maxUsoPeriodo) * 100;

  // Calcular a percentagem sobre o total de serviços prestados do elevador de média utilização
  int totalUsoElevadores = elevadorA + elevadorB + elevadorC;
  float percentagemMediaUtilizacao = ((float)elevadorB / totalUsoElevadores) * 100;

  // Imprimir os resultados
  printf("\nPeríodo mais usado de todos: %c (Elevador %c)\n", periodoMaiorUso, elevadorMaisFrequentado);
  printf("Elevador mais frequentado: Elevador %c\n", elevadorMaisFrequentado);
  printf("Diferença percentual entre o mais usado e o menos usado: %.2f%%\n", diferencaPercentual);
  printf("Percentagem sobre o total de serviços prestados do elevador de média utilização: %.2f%%\n", percentagemMediaUtilizacao);
}
