#include <stdio.h>
int main(int argc, char const *argv[])
{
  int inicio1, fim, inicio2;

  printf("Escolha um numero para o inicio e um para o fim e mostraremos seus multiplos!\n");
  printf("\nQualquer numero MAIOR DO QUE 2 para o inicio: ");
  scanf("%i", &inicio1);
  printf("Um numero para o fim, maior do que o inicio: ");
  scanf("%i", &fim);
  inicio2 = inicio1;

  while (inicio1 <= fim)
  {
    if (inicio1 % inicio2 == 0)
    {
      printf("%i\n", inicio1);
      inicio1++;
    }
    inicio1++;
  }
  return 0;
}
