#include <stdio.h>

int main() {
  char resposta;

  do {
    int ano, mes;

    printf("Digite o mes (1 a 12): ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    int bissexto = ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0);

    switch (mes) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      printf("\n O mes %d/%d tem 31 dias \n", mes, ano);
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      printf("\n O mes %d/%d tem 30 dias \n", mes, ano);
    break;
    
    case 2:
      if (bissexto) {
        printf("\n O mes 2/%d tem 29 dias (ano bissexto) \n", ano);
      } else {
        printf("\n O mes 2/%d tem 28 dias \n", ano);
      }
    break;
    
    default:
      printf("\n Mes invalido");
    }

    printf("\n VOCE DESEJA OUTRAS ENTRADAS (S/?)? \n");
    scanf(" %c", &resposta);

  } while (resposta == 'S' || resposta == 's');

  printf("Fim do programa");

  return 0;

}
