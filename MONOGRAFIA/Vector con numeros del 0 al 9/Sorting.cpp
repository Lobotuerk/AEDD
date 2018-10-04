#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void waitEsc()
{
  int flag = 1;
  unsigned char a;
  printf("                           ^^^^^  Vector ordenado  ^^^^^\n");
  printf("\n                Presione escape para volver al menu cuando desee\n");
  while (flag)
  {
    a = getch();
    if (a==0 || a==0xE0) a=getch();
    if (a==27) flag = 0;
  }
}

void waitEnter(int *vector, int n)
{
  printf("                                       V\n                 ");
  for (int i = 0; i < n; i++) printf("[%d]", vector[i]);
  printf("\n");
  int flag = 1;
  unsigned char a;
  while (flag)
  {
    a = getch();
    if (a==0 || a==0xE0) a=getch();
    if (a==13) flag = 0;
  }
}

void intercambioV(int *vector,int a, int b)
{
  int temp = vector[a];
  vector[a] = vector[b];
  vector[b] = temp;
}

void unirPartes(int *vector, int min, int mid, int max, int n)
{
  int i = 0, j = 0, k = 0, n1, n2, *temp1, *temp2;
  n1 = mid - min + 1;
  n2 = max - mid;
  temp1 = (int*) malloc(sizeof(int) * n1);
  temp2 = (int*) malloc(sizeof(int) * n2);
  for (int x = 0; x < n1; x++) temp1[x] = vector[min + x];
  for (int x = 0; x < n2; x++) temp2[x] = vector[mid + 1 + x];
  for (k = min; k <= max; k++)
  {
    if (temp1[i] <= temp2[j]) vector[k] = temp1[i++];
    else vector[k] = temp2[j++];
  }
  free(temp1);
  free(temp2);
  waitEnter(vector, n);
}

void mergeSort(int *vector, int min, int max, int n)
{
  int mid;
  if (min < max)
  {
    mid = (min+max)/2;
    mergeSort(vector, min, mid, n);
    mergeSort(vector, mid + 1,max, n);
    unirPartes(vector, min, mid, max, n);
  }
}

int calcPivot(int *vector, int min, int max, int n)
{
  int index, pivot;
  pivot = vector[max];
  index = min-1;
  for (int j = min; j <= max-1; j++)
  {
    if (vector[j] <= pivot)
    {
      index = index + 1;
      intercambioV(vector, index, j);
      waitEnter(vector, n);
    }
  }
  intercambioV(vector, index+1, max);
  waitEnter(vector, n);
  return index+1;
}

void quickSort(int *vector, int min, int max, int n)
{
  int pivot;
  if (min < max)
  {
    pivot = calcPivot(vector, min, max, n);
    quickSort(vector, min, pivot-1, n);
    quickSort(vector, pivot+1, max, n);
  }
}

void selectionSort(int *vector, int n)
{
  int index;
  for (int i = 0; i+1 < n; i++)
  {
    index = i;
    for (int j = i+1; j < n; j++)if (vector[j] < vector[index]) index = j;
    intercambioV(vector,index,i);
    waitEnter(vector, n);
  }
  waitEsc();
}

void deckSort(int *vector, int n)
{
  int temp,j;
  for (int i = 1; i < n; i++)
  {
    temp = vector[i];
    j = i-1;

    while (j >= 0 && vector[j] > temp)
    {
      vector[j+1] = vector[j];
      j = j-1;
      printf("                                       V\n                 ");
      for (int i = 0; i < n; i++) printf("[%d]", vector[i]);
      printf("\n");
      waitEnter(vector, n);
    }
    vector[j+1] = temp;
    printf("                                       V\n                 ");
    for (int i = 0; i < n; i++) printf("[%d]", vector[i]);
    printf("\n");
    waitEnter(vector, n);
  }
  waitEsc();
}

void bubbleSort(int *vector, int n)
{
  for (int i = 0; i+1 < n; i++)
  {
    for (int j = 0; j+1 < n-i; j++)
    {
      if (vector[j] > vector[j+1])
      {
        intercambioV(vector, j, j+1);
        waitEnter(vector, n);
      }
    }
  }
  waitEsc();
}

void sort(int *vector, int n, int opcion)
{
    int *temp;
    temp = (int*) malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++) temp[i] = vector[i];
    system("cls");
    printf("----------------------------------------------------------------\n");
    printf("\n");
    printf("     Vector = ");
    for(int i = 0; i < n; i++)
    {
      printf("[%d]", vector[i]);
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("Modificar Arreglo");
    printf("\n");
    printf("Ver Ordenamiento por intercambio/Metodo Burbuja");
    if(opcion == 1) printf("<---");
    printf("\n");
    printf("Ver Ordenamiento por insercion/Metodo de la baraja");
    if(opcion == 2) printf("<---");
    printf("\n");
    printf("Ver Ordenamiento por seleccion/Metodo sencillo");
    if(opcion == 3) printf("<---");
    printf("\n");
    printf("Ver Ordenamiento rapido/Metodo QuickSort");
    if(opcion == 4) printf("<---");
    printf("\n");
    printf("Ver Ordenamiento por mezcla/Metodo MergeSort");
    if(opcion == 5) printf("<---");
    printf("\n");
    printf("\n");
    printf("Presione enter para dar un paso en el ordenamiento\n");
    printf("\n");
    printf("v v v v v v v v v v v v v v v v v v v v v v v v v v v v v v v \n");
    printf("Vector Inicial = ");
    for (int i = 0; i < n; i++) printf("[%d]", vector[i]);
    printf("\n");
    if (opcion == 1) bubbleSort(temp, n);
    if (opcion == 2) deckSort(temp, n);
    if (opcion == 3) selectionSort(temp, n);
    if (opcion == 4)
    {
      quickSort(temp, 0, n-1, n);
      waitEsc();
    }
    if (opcion == 5)
    {
      mergeSort(temp, 0, n-1, n);
      waitEsc();
    }

}
