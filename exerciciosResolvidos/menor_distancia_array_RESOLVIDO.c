// segue o link para rodar no onlinegdb: https://onlinegdb.com/jqq5pNja3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int arrayUm[15];
  int arrayDois[15];
  int menorDistancia = 1000;
  int valorArrayUm, valorArrayDois;

  srand(time(NULL));

  for (int i = 0; i < 15; i++)
  {
    arrayUm[i] = rand() % 1000;
    arrayDois[i] = rand() % 1000;
  }

  printf("Array 1 -> [");
  for (int i = 0; i < 15; i++)
  {
    printf("%d", arrayUm[i]);
    if (i < 14)
    {
      printf(", ");
    }
  }
  printf("]\n");

  printf("Array 2 -> [");
  for (int i = 0; i < 15; i++)
  {
    printf("%d", arrayDois[i]);
    if (i < 14)
    {
      printf(", ");
    }
  }
  printf("]\n");

  for (int i = 0; i < 15; i++)
  {
    for (int j = 0; j < 15; j++)
    {
      int dist = abs(arrayUm[i] - arrayDois[j]);
      if (dist < menorDistancia)
      {
        menorDistancia = dist;
        valorArrayUm = arrayUm[i];
        valorArrayDois = arrayDois[j];
      }
    }
  }

  printf("A menor distância é: %d\n", menorDistancia);
  printf("Valor no Array 1 -> [%d]\n", valorArrayUm);
  printf("Valor no Array 2 -> [%d]\n", valorArrayDois);

  return 0;
}
