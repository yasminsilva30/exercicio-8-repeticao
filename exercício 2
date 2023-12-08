#include <stdio.h>

int main() {
  int frequenciaElevadorA_M = 0, frequenciaElevadorA_V = 0,
      frequenciaElevadorA_N = 0;
  int frequenciaElevadorB_M = 0, frequenciaElevadorB_V = 0,
      frequenciaElevadorB_N = 0;
  int frequenciaElevadorC_M = 0, frequenciaElevadorC_V = 0,
      frequenciaElevadorC_N = 0;
  int totalServicos = 0;

  for (int i = 0; i < 50; i++) {
    char elevador, periodo;

    printf("Informe o elevador mais utilizado pelo morador %d (A/B/C): ", i + 1);
    scanf(" %c", &elevador);

    printf("Informe o periodo mais utilizado pelo morador %d (M/V/N): ", i + 1);
    scanf(" %c", &periodo);

    switch (elevador) {
    case 'A':
      if (periodo == 'M')
        frequenciaElevadorA_M++;
      else if (periodo == 'V')
        frequenciaElevadorA_V++;
      else if (periodo == 'N')
        frequenciaElevadorA_N++;
    break;
    
    case 'B':
      if (periodo == 'M')
        frequenciaElevadorB_M++;
      else if (periodo == 'V')
        frequenciaElevadorB_V++;
      else if (periodo == 'N')
        frequenciaElevadorB_N++;
    break;
    
    case 'C':
      if (periodo == 'M')
        frequenciaElevadorC_M++;
      else if (periodo == 'V')
        frequenciaElevadorC_V++;
      else if (periodo == 'N')
        frequenciaElevadorC_N++;
    break;
    
    default:
      printf("\n Elevador invalido. Por favor, escolha A, B ou C \n");
      i--;
    }

    totalServicos++;
  }

  int totalMaisUsado =
      frequenciaElevadorA_M + frequenciaElevadorA_V + frequenciaElevadorA_N +
      frequenciaElevadorB_M + frequenciaElevadorB_V + frequenciaElevadorB_N +
      frequenciaElevadorC_M + frequenciaElevadorC_V + frequenciaElevadorC_N;

  float diferencaPercentual = ((float)(totalMaisUsado - totalServicos) / totalServicos) * 100;
  float percentagemElevadorMedia = ((float)(totalServicos - totalMaisUsado) / totalServicos) * 100;

  printf("\n Resultados: \n");
  printf("\n Periodo mais usado de todos: %c, pertence ao elevador %c", 'M' + (totalMaisUsado - frequenciaElevadorA_M - frequenciaElevadorB_M - frequenciaElevadorC_M) /  50, 
    'A' + (totalMaisUsado - frequenciaElevadorA_M - frequenciaElevadorA_V -frequenciaElevadorA_N) / 50);
  printf("\n Elevador mais frequentado: %c, concentra-se no periodo %c",
         'A' + (totalMaisUsado - frequenciaElevadorB_M - frequenciaElevadorC_M - frequenciaElevadorB_V - frequenciaElevadorC_V - frequenciaElevadorB_N - frequenciaElevadorC_N) / 50,
         'M' + (totalMaisUsado - frequenciaElevadorB_M - frequenciaElevadorB_V - frequenciaElevadorC_M - frequenciaElevadorC_V - frequenciaElevadorB_N - frequenciaElevadorC_N) / 50);
  printf("\n Diferenca percentual entre o mais usado e o menos usado: %.2f%%", diferencaPercentual);
  printf("\n Porcentagem sobre o total de serviços do elevador de media utilizacao: %.2f%%", percentagemElevadorMedia);

  return 0;

}
