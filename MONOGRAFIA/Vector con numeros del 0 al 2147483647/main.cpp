#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"Prints.cpp"
#include"Sorting.cpp"


int main()
{
  unsigned char a;
  int  opcion = 0, n = 10, flag = 1,*vector;
  vector = (int*) malloc(sizeof(int) * 10);
  for (int i = 0; i < n; i++) vector[i] = 0;
  while(flag)
  {
    printMenu(vector, n, opcion);
    a = getch();
    if (a==0 || a==0xE0) a=getch();
    if (a==27) break;
    switch(a)
    {
      case 72:
          if (opcion > 0) opcion = opcion - 1;
          break;
      case 80:
          if (opcion < 5) opcion = opcion + 1;
          break;
      case 77:
          if (opcion == 0)cargarVector(vector, n);
          if (opcion > 0 && opcion < 6) sort(vector, n, opcion);
          break;
      case 75:
          flag = 0;
          break;
  }
  }
  return 0;
}
