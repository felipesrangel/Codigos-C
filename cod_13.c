
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[])

{
  srand(time(NULL));
  int resposta, segredo, cont = 1, escolha;
  segredo = rand() % 100 + 1;

  do
  {
    printf("\nJogo das 7 vidas\n");
    printf("Gostaria de jogar? Sim(1) Não(0)");
    scanf("%i", &escolha);
    if (escolha == 0)
      printf("Game Over");
    else if (escolha != 1)
      printf("Erro de escolha, tente novamente");
    else
    {
      while (cont <= 7 && resposta != segredo)
      {
        printf("\nEscolha sua resposta: ");
        scanf("%i", &resposta);

        if (resposta > segredo)
          printf("\nMenor, Tentativa %i", cont + 1);
        else if (resposta < segredo)
          printf("\nMaior, Tentativa %i", cont + 1);
        cont++;
      }
      if (resposta != segredo)
      {
        printf("\nGame Over, você morreu");
      }
      else
        printf("\nParabéns Você ganhou");
    }
  } while (escolha != 0);

  return 0;
}