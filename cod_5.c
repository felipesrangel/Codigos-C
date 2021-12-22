#include <stdio.h>
int main(int argc, char const *argv[])
{
  int cont = 999, somaPar = 0, somaImpar = 0;

  while (cont >= 100)
  {
    if (cont % 2 == 0)
    {
      somaPar = somaPar + cont;
      cont--;
    }
    else
    {
      somaImpar = somaImpar + cont;
      cont--;
    }
  }
  printf("A soma dos numeros pares: %i\n", somaPar);
  printf("A soma dos numeros impares %i\n", somaImpar);
  return 0;
}
