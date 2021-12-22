#include <stdio.h>

int main(int argc, char const *argv[])
{
  int A = 0, B = 0, C = 0, resposta, opiniao;

  do
  {
    printf("Gostaria de dar a opiniao sobre qual produto voce tem preferencia? SIM[1] NAO[0]");
    scanf("%i", &resposta);

    if (resposta != 1 && resposta != 0)
    {
      printf("Resposta incorreta, tente novamente");
    }
    else
    {
      if (resposta == 1)
      {
        printf("Qual MIX voce gostou mais? MIX-1[1] MIX-2[2] MIX-3[3]\n ");
        scanf("%i", &opiniao);

        if (opiniao != 1 && opiniao != 2 && opiniao != 3)
        {
          printf("Opcao invalida, tente novamente");
        }
        else
        {
          if (opiniao == 1)
          {
            A++;
          }
          else if (opiniao == 2)
          {
            B++;
          }
          else
            C++;
        }
      }
      else
        printf("Tenha um bom dia, volte sempre!");
    }

  } while (resposta != 0);
  printf("\n%i Pessoas gostaram do MIX 1 \n%i Pessoas gostaram do MIX 2 \n%i Pessoas gostaram do MIX 3", A, B, C);
  return 0;
}
