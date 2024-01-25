// segue o link para rodar no onlinegdb: https://onlinegdb.com/7NCUCWsxW
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char binParaChar(const char *strBin)
{
  return (char)strtol(strBin, NULL, 2);
}

int main()
{
  const char msgCripto[] = "10010110 11110111 01010110 00000001 00010111 00100110 01010111 00000001 00010111 01110110 01010111 00110110 11110111 11010111 01010111 00000011";
  char copiaMsgCripto[256];
  char *token;

  strcpy(copiaMsgCripto, msgCripto);

  printf("Mensagem criptografada: %s\n", msgCripto);
  printf("Mensagem decifrada: ");

  token = strtok(copiaMsgCripto, " ");

  while (token != NULL)
  {
    int tokenLength = strlen(token);
    char ultimo = token[tokenLength - 1];
    char penultimo = token[tokenLength - 2];

    token[tokenLength - 1] = (ultimo == '1') ? '0' : '1';
    token[tokenLength - 2] = (penultimo == '1') ? '0' : '1';

    for (int i = 0; i < 4; i++)
    {
      char temp = token[i];
      token[i] = token[i + 4];
      token[i + 4] = temp;
    }

    printf("%c", binParaChar(token));
    token = strtok(NULL, " ");
  }

  printf("\n");
  return 0;
}
