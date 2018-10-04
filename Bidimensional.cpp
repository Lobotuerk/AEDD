#include <stdio.h>
#include <stdlib.h>

void cargar(int matrix[100][100], int n, int m)
{
  for (int x = 0; x < n; x++)
  {
    for (int y = 0; y < m; y++)
    {
      printf("Ingrese el elemento [%d,%d]: ", x+1, y+1);
      scanf("%d", &matrix[x][y]);
    }
  }
}

int mayoresVentas(int matrix[100][100], int n, int m)
{
  int temp, max = 0, index = 0;
  for (int x = 0; x < n; x++)
  {
    temp = 0;
    for (int y = 0; y < m; y++)
    {
      temp = temp + matrix[x][y];
    }
    if (temp > max)
    {
      max = temp;
      index = x;
    }
  }
  return index;
}

int mayorDeporte(int matrix[100][100], int n, int m)
{
  int temp, max = 0, index = 0;
  for (int y = 0; y < m; y++)
  {
    temp = 0;
    for (int x = 0; x < n; x++)
    {
      temp = temp + matrix[x][y];
    }
    if (temp > max)
    {
      max = temp;
      index = y;
    }
  }
  return index;
}

int total(int matrix[100][100], int n, int m)
{
  int total = 0;
  for (int i = 0; i < n; i++)
  {
    for (int t = 0; t < m; t++)
    {
      total = total + matrix[i][t];
    }
  }
  return total;
}

int main()
{
  int matrix[100][100], n, m;
  printf("Ingrese N de la matriz: ");
  scanf("%d", &n);
  printf("y M de la matriz: ");
  scanf("%d", &m);
  //matrix = (int**) malloc(sizeof(int*)*n);
  //*matrix = (int*) malloc(sizeof(int)*m);
  //Ni idea porque con malloc no anda, algo de memoria se rompe
  cargar(matrix,n,m);
  printf("La sucursal con mayores ventas fue la numero %d\n", mayoresVentas(matrix, n, m)+1);
  printf("El deporte con mayor venta fue el numero %d\n", mayorDeporte(matrix, n, m)+1);
  printf("El total de ventas fue %d\n", total(matrix, n, m));
}
