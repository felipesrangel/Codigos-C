#include <stdio.h>

int main(int argc, char const *argv[])
{
  int cont = 9, soma = 0;

  do
  {
    if (cont % 3 == 0 && cont % 5 != 0)
    {
      printf("%i\n", cont);
      soma += cont;
    }
    cont++;

  } while (cont <= 90);
  printf("A soma dos numeros impares e: %i", soma);
  return 0;
}
