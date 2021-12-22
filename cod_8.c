#include <stdio.h>

int main(int argc, char const *argv[])
{
  int escolha, cont = 6, soma = 0, media, fim;

  printf("Escolha um numero maior do que 1: ");
  scanf("%i", &escolha);

  fim = cont * escolha;

  while (cont <= fim)
  {
    if (cont % 6 == 0)
    {

      soma += cont;
    }
    cont++;
    media = soma / escolha;
  }

  printf("%i", media);

  return 0;
}
