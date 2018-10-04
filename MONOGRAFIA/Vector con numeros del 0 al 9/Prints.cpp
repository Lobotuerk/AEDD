#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"ModVector.cpp"

void ingV(int *vector, int n)
{
  unsigned char a;
  int flag = 1,mod = 0;  
  while (flag)
  {
    system("cls");
    printf("----------------------------------------------------------------\n");
    printf("\n");
    printf("     Vector = ");
    for(int i = 0; i < n; i++) printf("[%d]", vector[i]);
    printf("\n");
    printf("               ");
    for( int i = 0; i < mod; i++) printf("   ");
    printf("^");
    printf("\n");
    printf("Seleccione una opcion (con las flechas del teclado):\n");
    printf("\n");
    printf("Modificar N del arreglo");
    printf("\n");
    printf("Modificar Valores del Arreglo <---");
    printf("\n");
    printf("Randomizar Valores del Arreglo");
    printf("\n");
    printf("Resetear Arreglo a Default (N = 0, lleno de 0)");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("----------------------------------------------------------------\n");
    printf("Enter para aceptar, flecha de atras or esc para volver, backspace para borrar\n");
    a = getch();
    if (a==0 || a==0xE0) a=getch();
    if (a==27) break;
    switch(a) {
        case 48:
            vector[mod] = 0;
            if (mod < n) mod = mod + 1;
            break;
        case 49:
            vector[mod] = 1;
            if (mod < n) mod = mod + 1;
            break;
        case 50:
            vector[mod] = 2;
            if (mod < n) mod = mod + 1;
            break;
        case 51:
            vector[mod] = 3;
            if (mod < n) mod = mod + 1;
            break;
        case 52:
            vector[mod] = 4;
            if (mod < n) mod = mod + 1;
            break;
        case 53:
            vector[mod] = 5;
            if (mod < n) mod = mod + 1;
            break;
        case 54:
            vector[mod] = 6;
            if (mod < n) mod = mod + 1;
            break;
        case 55:
            vector[mod] = 7;
            if (mod < n) mod = mod + 1;
            break;
        case 56:
            vector[mod] = 8;
            if (mod < n) mod = mod + 1;
            break;
        case 57:
            vector[mod] = 9;
            if (mod < n) mod = mod + 1;
            break;
        case 8:
            if (mod > 0)
            {
              mod = mod - 1;
              vector[mod] = 0;
            }
            break;
        case 13:
            flag = 0;
            break;
    }
  }
}

void ingN(int *vector, int &n)
{
  unsigned char a;
  int flag = 1, size = 0, *ing;
  while (flag)
  {
    system("cls");
    printf("----------------------------------------------------------------\n");
    printf("\n");
    printf("     Vector = ");
    for(int i = 0; i < n; i++) printf("[%d]", vector[i]);

    printf("\n");
    printf("\n");
    printf("Seleccione una opcion (con las flechas del teclado):\n");
    printf("\n");
    printf("Modificar N del arreglo ---> ");
    if (size > 0)
    {
      for (int i = 0; i < size; i++)
      {
        printf("%d",ing[i]);
      }
    }
    printf("_\n");
    printf("Modificar Valores del Arreglo");
    printf("\n");
    printf("Randomizar Valores del Arreglo");
    printf("\n");
    printf("Resetear Arreglo a Default (N = 0, lleno de 0)");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("----------------------------------------------------------------\n");
    printf("Enter para aceptar, flecha de atras or esc para volver, backspace para borrar\n");
    a = getch();
    if (a==0 || a==0xE0) a=getch();
    if (a==27) break;
    switch(a) {
        case 48:
            ing = modN(ing, size, size+1);
            ing[size-1] = 0;
            break;
        case 49:
            ing = modN(ing, size, size+1);
            ing[size-1] = 1;
            break;
        case 50:
            ing = modN(ing, size, size+1);
            ing[size-1] = 2;
            break;
        case 51:
            ing = modN(ing, size, size+1);
            ing[size-1] = 3;
            break;
        case 52:
            ing = modN(ing, size, size+1);
            ing[size-1] = 4;
            break;
        case 53:
            ing = modN(ing, size, size+1);
            ing[size-1] = 5;
            break;
        case 54:
            ing = modN(ing, size, size+1);
            ing[size-1] = 6;
            break;
        case 55:
            ing = modN(ing, size, size+1);
            ing[size-1] = 7;
            break;
        case 56:
            ing = modN(ing, size, size+1);
            ing[size-1] = 8;
            break;
        case 57:
            ing = modN(ing, size, size+1);
            ing[size-1] = 9;
            break;
        case 8:
            if (size > 0) ing = modN(ing, size, size-1);
            break;
        case 13:
            flag = 0;
            n = calcuN(ing,size);
            for (int i = 0; i < n; i++) vector[i] = 0;
            break;

    }
  }
}

void printMenu(int *vector, int n, int opcion)
{
  system("cls");
  printf("----------------------------------------------------------------\n");
  printf("\n");
  printf("     Vector = ");
  for(int i = 0; i < n; i++) printf("[%d]", vector[i]);
  printf("\n");
  printf("\n");
  printf("Seleccione una opcion (con las flechas del teclado):\n");
  printf("\n");
  printf("Modificar Arreglo                                   ");
  if(opcion == 0) printf("<---");
  printf("\n");
  printf("Ver Ordenamiento por intercambio/Metodo Burbuja     ");
  if(opcion == 1) printf("<---");
  printf("\n");
  printf("Ver Ordenamiento por insercion/Metodo de la baraja  ");
  if(opcion == 2) printf("<---");
  printf("\n");
  printf("Ver Ordenamiento por seleccion/Metodo sencillo      ");
  if(opcion == 3) printf("<---");
  printf("\n");
  printf("Ver Ordenamiento rapido/Metodo QuickSort            ");
  if(opcion == 4) printf("<---");
  printf("\n");
  printf("Ver Ordenamiento por mezcla/Metodo MergeSort        ");
  if(opcion == 5) printf("<---");
  printf("\n");
  printf("----------------------------------------------------------------\n");
  printf("Enter para aceptar, flecha de atras or esc para volver, backspace para borrar\n");
}

void cargarVector(int *vector, int &n)
{
  unsigned char a;
  int opcion = 0, flag = 1;
  while(flag)
  {
    system("cls");
    printf("----------------------------------------------------------------\n");
    printf("\n");
    printf("     Vector = ");
    for(int i = 0; i < n; i++) printf("[%d]", vector[i]);
    printf("\n");
    printf("\n");
    printf("Seleccione una opcion (con las flechas del teclado):\n");
    printf("\n");
    printf("Modificar N del arreglo                         ");
    if(opcion == 0) printf("<---");
    printf("\n");
    printf("Modificar Valores del Arreglo                   ");
    if(opcion == 1) printf("<---");
    printf("\n");
    printf("Randomizar Valores del Arreglo                  ");
    if(opcion == 2) printf("<---");
    printf("\n");
    printf("Resetear Arreglo a Default (N = 0, lleno de 0)  ");
    if(opcion == 3) printf("<---");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("----------------------------------------------------------------\n");
    printf("Enter para aceptar, flecha de atras or esc para volver, backspace para borrar\n");
    a = getch();
    if (a==0 || a==0xE0) a=getch();
    if (a==27) break;
    switch(a) {
        case 72:
            if (opcion > 0) opcion = opcion - 1;
            break;
        case 80:
            if (opcion < 3) opcion = opcion + 1;
            break;
        case 77:
            if (opcion == 0) ingN(vector, n);
            if (opcion == 1) ingV(vector, n);
            if (opcion == 2) for (int i = 0; i < n; i++) vector[i] = rand() % 10;
            if (opcion == 3) for (int i = 0; i < n; i++) vector[i] = 0;
            break;
        case 75:
            flag = 0;
            break;
    }
  }
}
