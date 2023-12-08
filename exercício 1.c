#include <stdio.h>

int main() {
  int quantidadeOtimo = 0;
  int quantidadeBom = 0;
  int quantidadeRegular = 0;
  int quantidadeRuim = 0;
  int quantidadePessimo = 0;
  int somaIdadeRuim = 0;
  int maiorIdadePessimo = -1;
  int maiorIdadeOtimo = -1;
  int maiorIdadeRuim = -1;

  for (int i = 0; i < 100; i++) {
    int idade;
    char opiniao;

    printf("/n Digite a idade do espectador %d: " i + 1);
    scanf("%d", &idade);
    i++;

    printf("Digite a opiniao dele entre A, B, C, D ou E: ");
    scanf(" %c", &opiniao);

    
    switch (opiniao) {
    case 'A':
      quantidadeOtimo++;
      if (idade > maiorIdadeOtimo) {
        maiorIdadeOtimo = idade;
      }
    break;
    
    case 'B':
      quantidadeBom++;
    break;
    
    case 'C':
      quantidadeRegular++;
    break;
    
    case 'D':
      quantidadeRuim++;
      somaIdadeRuim += idade;
      if (idade > maiorIdadeRuim) {
        maiorIdadeRuim = idade;
      }
    break;
    
    case 'E':
      quantidadePessimo++;
      if (idade > maiorIdadePessimo) {
        maiorIdadePessimo = idade;
      }
    break;
    
    default:
      printf("\n Opiniao invalida. Por favor, escolha A, B, C, D ou E \n");
      i--;
    }
  }

  float diferencaPercentual =
      ((float)quantidadeBom - quantidadeRegular) / quantidadeBom * 100;
  float mediaIdadeRuim =
      quantidadeRuim > 0 ? (float)somaIdadeRuim / quantidadeRuim : 0;
  float percentagemPessimo = (float)quantidadePessimo / 100 * 100;

  printf("\n Resultados:");
  printf("\n Quantidade de respostas Otimo: %d", quantidadeOtimo);
  printf("\n Diferenca percentual entre respostas 'Bom' e 'Regular': %.2f%%", diferencaPercentual);
  printf("\n Media de idade das pessoas que responderam 'Ruim': %.2f", mediaIdadeRuim);
  printf("\n Porcentagem de respostas 'Pessimo': %.2f%%", percentagemPessimo);
  printf("\n Maior idade que utilizou a opcao  'Pessimo': %d", maiorIdadePessimo);
  printf("\n Diferenca de idade entre a maior idade que respondeu 'Otimo' e a maior idade que respondeu 'Ruim': %d", maiorIdadeOtimo - maiorIdadeRuim);

  return 0;

}
