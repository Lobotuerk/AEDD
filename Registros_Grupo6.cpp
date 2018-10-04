#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>
#include <conio.h>

typedef char palabra[40];

struct registro
{
  palabra ayn;
  palabra domicilio;
  palabra ultimaFecha;
  bool obraSocial;
  palabra telefono;
  palabra nacimiento;
  long int documento;
  bool alergia;
};

void printMenu()
{
  system("cls");
  printf("Opciones:\n");
  printf("1 - Ingresar paciente:\n");
  printf("2 - Visualizar datos de paciente:\n");
  printf("3 - Mostrar ultima fecha de consulta por documento\n");
  printf("4 - Listar pacientes alergicos\n");
  printf("5 - Listar pacientes con obra social\n");
  printf("6 - Salir del menu\n");
  printf("Ingrese el numero de opcion a seleccionar: ");
  return;
}

registro crearPaciente()
{
  registro temp;
  int si;
  system("cls");
  printf("Ingrese apellido y nombre: ");
  _flushall();
  gets(temp.ayn);
  printf("Ingrese direccion de domicilio: ");
  gets(temp.domicilio);
  printf("Ingrese fecha de ultima consulta en formato DD/MM/AAAA: ");
  gets(temp.ultimaFecha);
  printf("Tiene obra social? 1-Si / Cualquier Otro Numero-No: ");
  scanf("%d", &si);
  if (si==1) temp.obraSocial = true;
  else temp.obraSocial = false;
  _flushall();
  printf("Ingrese telefono: ");
  gets(temp.telefono);
  printf("Ingrese nacimiento (El formato da lo mismo total no se lo usa para nada): ");
  gets(temp.nacimiento);
  printf("Ingrese documento: ");
  scanf("%ld", &temp.documento);
  printf("Tiene alguna alergia? 1-Si / Cualquier Otro Numero-No: ");
  scanf("%d", &si);
  if (si==1) temp.alergia = true;
  else temp.alergia = false;
  return temp;
}

void VerDato(registro pacientes[100], int cantidad)
{
  int flag = -1;
  palabra temp;
  system("cls");
  _flushall();
  printf("Ingrese el nombre y apellido del paciente a buscar: ");
  gets(temp);
  for (int i = 0; i < cantidad; i++)
  {
    if (strcmp(pacientes[i].ayn, temp) == 0) flag = i;
  }
  if (flag != -1)
  {
    printf("Paciente de nombre ");
    puts(pacientes[flag].ayn);
    printf("Numero de documento: %ld\n", pacientes[flag].documento);
    printf("Domicilio: ");
    puts(pacientes[flag].domicilio);
    printf("Ultima fecha visto: ");
    puts(pacientes[flag].ultimaFecha);
    printf("Telefono: ");
    puts(pacientes[flag].telefono);
    printf("Fecha de Nacimiento: ");
    puts(pacientes[flag].nacimiento);
    if (pacientes[flag].alergia == true) printf("Alergico\n");
    else printf("No alergico\n");
    if (pacientes[flag].obraSocial == true) printf("Tiene obra social\n");
    else printf("No tiene obra social\n");
  }
  else printf("Paciente no encontrado\n");
  printf("Presione una tecla para volver al menu....");
  getch();
  return;
}

void MostrarFecha(registro pacientes[100], int cantidad)
{
  int flag = -1;
  long int temp;
  system("cls");
  printf("Ingrese el documento del paciente a buscar: ");
  scanf("%ld", &temp);
  for (int i = 0; i < cantidad; i++)
  {
    if (pacientes[i].documento == temp) flag = i;
  }
  if (flag != -1)
  {
    printf("Ultima fecha del paciente: ");
    _flushall();
    puts(pacientes[flag].ultimaFecha);
  }
  else printf("Paciente no encontrado\n");
  printf("Presione una tecla para volver al menu....");
  getch();
  return;
}

void ListaAlergicos(registro pacientes[100], int cantidad)
{
  system("cls");
  printf("Lista de pacientes con alergia:\n");
  for (int i = 0; i < cantidad; i++)
  {
    if (pacientes[i].alergia) puts(pacientes[i].ayn);
  }
  printf("Presione una tecla para volver al menu....");
  getch();
  return;
}

void ListaObra(registro pacientes[100], int cantidad)
{
  system("cls");
  printf("Lista de pacientes con alergia:\n");
  for (int i = 0; i < cantidad; i++)
  {
    if (pacientes[i].obraSocial) puts(pacientes[i].ayn);
  }
  printf("Presione una tecla para volver al menu....");
  getch();
  return;
}

int main()
{
  registro pacientes[100];
  int temp=0, cantidad = 0;
  while (temp != 6)
  {
    printMenu();
    scanf("%d", &temp);
    switch(temp)
    {
      case 1: pacientes[cantidad] = crearPaciente();
              cantidad++;
              break;
      case 2: VerDato(pacientes, cantidad);
              break;
      case 3: MostrarFecha(pacientes, cantidad);
              break;
      case 4: ListaAlergicos(pacientes, cantidad);
              break;
      case 5: ListaObra(pacientes, cantidad);
              break;
    }
  }
  return 0;
}
//Grupo 6
