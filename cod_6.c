#include <stdio.h>

int main(int argc, char const *argv[])
{
  int opiniao, respostaSim = 0, respostaNao = 0, cont = 0;

  while (cont <= 9999)
  {
    printf("Digite [1] para empregado [0] para desempregado: ");
    scanf("%i", &opiniao);

    if (opiniao != 1 && opiniao != 0)
    {
      printf("Erro, tente novamente");
    }
    else
    {
      if (opiniao == 1)
      {
        respostaSim++;
        printf("\n%i pessoas empregadas\n", respostaSim);
      }
      else
      {
        respostaNao++;
        printf("\n%i pessoas desempregadas\n", respostaNao);
      }
    }

    cont++;

    printf("A porcentagem de empregados: %i e a porcentagem de desempregados: %i\n", (respostaSim * 100) / cont, (respostaNao * 100) / cont);
  }
  return 0;
}
