#include <stdio.h>
#include <stdlib.h>

void intercambioV(int *vector,int a, int b)
{
  int temp = vector[a];
  vector[a] = vector[b];
  vector[b] = temp;
}

void bubbleSort(int *vector, int n, int *vector2)
{
  for (int i = 0; i+1 < n; i++)
  {
    for (int j = 0; j+1 < n-i; j++)
    {
      if (vector[j] < vector[j+1])
      {
        intercambioV(vector, j, j+1);
        intercambioV(vector2, j, j+1);
      }
    }
  }
  return;
}

void carga(int *prom, int n, int *leg)
{
  for (int i=0;i<n;i++)
  {
    printf("Ingrese el legajo numero %d: ", i+1);
    scanf("%d", &leg[i]);
    printf("y su promedio: ");
    scanf("%d", &prom[i]);
  }
}

int buscar(int *leg, int k, int n)
{
  for (int i = 0; i < n; i++)
  {
    if (leg[i] == k) return 1;
  }
  return 0;
}

int main()
{
  int n, *leg, *prom, k;
  printf ("Ingrese la cantidad de alumnos: ");
  scanf("%d", &n);
  leg = (int*) malloc(sizeof(int) * n);
  prom = (int*) malloc(sizeof(int) * n);
  carga (prom,n,leg);
  bubbleSort(prom, n, leg);
  printf("Los mejores promedios son: 1-%d con promedio %d,  2-%d con promedio %d,  3-%d con promedio %d,\n", leg[0], prom[0], leg[1], prom[1], leg[2], prom[2]);
  printf("Ingrese el legajo a buscar: ");
  scanf("%d", &k);
  if (buscar(leg,k,n))
  {
    printf("El legajo se encuentra entre los ingresados");
  }
  else
  {
    printf("El legajo no se encuentra entre los ingresados");
  }
}
