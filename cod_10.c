#include <stdio.h>
int main(int argc, char const *argv[])
{
  int cont = 10, soma = 0;

  for (cont; cont <= 90; cont++)
  {
    if (cont % 5 == 2)
    {
      soma += cont;
      printf("%i\n", cont);
      cont++;
    }
  }
  printf("A soma de todos os numeros e: %i", soma);
  return 0;
}