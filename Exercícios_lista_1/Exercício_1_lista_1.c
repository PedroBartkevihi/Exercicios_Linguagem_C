#include <stdio.h>

// Entrada: int lado do cubo
// Saída: float volume do cubo

int main()
{
  int aresta, volume;

  printf("Digite o tamanho da aresta: \n");
  scanf("%d", &aresta);

  volume = aresta * aresta * aresta;

  printf("O volume do cubo e: %d",volume);

  return 0;
}