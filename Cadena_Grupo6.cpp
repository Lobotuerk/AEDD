#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef char cadena[50];
typedef cadena vector[100];

void printMenu()
{
  system("cls");
  printf("1 - Cargar Vehiculos\n");
  printf("2 - Buscar un vehiculo\n");
  printf("3 - Listar los vehiculos registrados\n");
  printf("4 - Poner en mayusculas todos y mostrar (Vaya uno a saber para que)\n");
  printf("5 - Salir\n");
}

int ingresarAutos(vector autos)
{
  int n;
  system("cls");
  printf("Ingrese numero de autos: ");
  scanf("%d", &n);
  _flushall();
  for (int i = 0; i < n; i++)
  {
    printf("Ingrese el nombre del auto: ");
    gets(autos[i]);
  }
  return n;
}

void buscarVehiculo(vector autos, int n)
{
  int flag = 0;
  cadena temp;
  system("cls");
  _flushall();
  printf("Ingrese el vehiculo a buscar: ");
  gets(temp);
  for (int i = 0; i < n; i++)
  {
    if (strcmp(autos[i], temp) == 0) flag = 1;
  }
  if (flag) printf("Vehiculo encontrado\n");
  else printf("Vehiculo no encontrado\n");
  printf("Presione una tecla para volver al menu....");
  getch();
}

void imprimir(vector autos, int n)
{
  system("cls");
  printf("Lista de los autos actuales: \n");
  for (int i = 0; i < n; i++)
  {
    puts(autos[i]);
  }
  printf("Presione una tecla para volver al menu....");
  getch();
}

void lowerAll(vector autos, int n)
{
  int i = 0;
  for (int c = 0; c < n; c++)
  {
    i = 0;
    while (autos[c][i])
    {
      if (autos[c][i] <= 122 && autos[c][i] >=97) autos[c][i] = autos[c][i] - 32;
      i++;
    }
  }
}

int main()
{
  vector autos;
  int n = 0, choice = 0;
  while(choice != 5)
  {
    printMenu();
    printf("Seleccione una opcion: ");
    scanf("%d", &choice);
    switch(choice)
    {
      case 1: n = ingresarAutos(autos);
              break;
      case 2: buscarVehiculo(autos, n);
              break;
      case 3: imprimir(autos, n);
              break;
      case 4: lowerAll(autos, n);
              imprimir(autos, n);
              break;
    }
  }
  return 0;
}
//Grupo6
