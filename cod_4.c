#include <stdio.h>

int main(int argc, char const *argv[])
{
  int cont = 400, qntd = 0;

  for (cont; cont >= 300; cont--)
  {
    if (cont % 11 == 0)
    {
      qntd += cont;
      printf("\n%i", cont);
    }
  }
  printf("\nA soma de todos os multiplos deu: %i", qntd);
  return 0;
}
