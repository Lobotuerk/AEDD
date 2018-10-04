#include <stdio.h>
#include <stdlib.h>

void cargarD(int n, float *vector)
{
  for (int i = 0; i < n; i++)
  {
    printf("Ingrese el promedio del alumno de legajo %d: ", i + 1);
    scanf("%f", &vector[i]);
  }
  return;
}

int indiceM(int n, float *vector)
{
  int temp = 0;
  for (int i = 0; i < n; i++)
  {
    if (vector[i] > vector[temp]) temp = i;
  }
  return temp;
}

int main()
{
  int n;
  float *vector;
  printf("Ingrese la cantidad de alumnos: ");
  scanf("%d",&n);
  vector = (float*) malloc(sizeof(float) * n);
  cargarD(n,vector);
  n = indiceM(n, vector);
  printf("El legajo del alumno con mejor promedio fue %d con un promedio de %.2f",n+1,vector[n]);
}
