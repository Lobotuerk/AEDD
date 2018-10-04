#include <stdio.h>
#include "MuestraPares.h"

int main()
{
  int n;
  printf("\n              [ Genera una serie de nros pares y muestra por pantalla a travez de una funcion recursiva ");
  printf("\n              -------------------------------------------------------------------------------------------\n\n");
  printf("INGRESE CANTIDAD DE NUMEROS PARES A MOSTRAR POR PANTALLA: ");
  scanf("%d", &n);
  printf("\n");
  numRecursive(n);
  printf("\n\n\n            Los numeros pares mostrados por pantalla son: %d\n\n\n", n);
}
