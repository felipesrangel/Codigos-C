#include <stdio.h>

int main(int argc, char const *argv[])
{
#define SM 880.05
  int cont = 0, A = 0, B = 0, C = 0, porcentoA, porcentoB, porcentoC;
  float salario;

  do
  {
    printf("Qual o seu salario: ");
    scanf("%f", &salario);

    if (salario >= (15 * SM))
    {
      A++;
    }

    else if (salario < (15 * SM) && salario >= (5 * SM))
    {
      B++;
    }

    else if (salario < (5 * SM))
    {
      C++;
    }

    cont++;

  } while (cont <= 4);

  porcentoA = (A * 100) / (A + B + C);
  porcentoB = (B * 100) / (A + B + C);
  porcentoC = (C * 100) / (A + B + C);
  printf("A: %i%% B: %i%% C: %i%%", porcentoA, porcentoB, porcentoC);

  return 0;
}