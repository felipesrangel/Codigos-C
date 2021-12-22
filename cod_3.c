#include <stdio.h>

int main(int argc, char const *argv[])
{
  int cont;

  for (cont = 3; cont <= 100; cont++)
  {
    if (cont % 3 == 0)
      printf("\n%i", cont);
  }

  return 0;
}
