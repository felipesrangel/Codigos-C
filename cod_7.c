#include <stdio.h>

int main(int argc, char const *argv[])
{
  int alunos = 0, opiniao, sim = 0, nao = 0;
  while (alunos < 10)
  {
    printf("PESQUISA DE OPINIÃO!\n");
    printf("Você gostou do Ensino Telepresencaial? SIM(1) ou NÃO(0)");
    printf("\nAluno %i", alunos + 1);
    printf("\nSua opinião: ");
    scanf("%i", &opiniao);

    if (opiniao != 1 && opiniao != 0)
      printf("Erro de opinião. Escolha novamente");
    else
    {
      if (opiniao == 1)
        sim++;
      else
        nao++;

      alunos++;
      printf("Porcentagem de sim: %.1f %%\n", sim * 100.0 / (sim + nao));

      printf("Porcentagem de sim: %.1f %%\n", nao * 100.0 / (sim + nao));
    }
  }
  return 0;
}