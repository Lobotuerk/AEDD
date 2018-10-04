#include <stdio.h>

int main()
{
  int nota,total,cuenta,max,maxn;
  maxn = 0;
  total = 0;
  cuenta = 0;
  max = 0;
  printf("Inserte la nota del alumno: ");
  scanf("%d",&nota);
  while (nota != 0)
  {
    total = total + nota;
    cuenta = cuenta + 1;
    if (nota > max)
    {
      max = nota;
      maxn = 1;
    }
    else if (nota == max)
    {
      maxn = maxn + 1;
    }
    printf("Inserte la nota del alumno: ");
    scanf("%d",&nota);
  }
  if (cuenta > 0)
  {
    printf("El promedio de los alumnos fue: %.2f\n", ((float)total )/ (float)cuenta);
    printf("La nota mas alta fue %d, que fue obtenida por %d alumnos", max, maxn);
  }
  else
  {
    printf("No se ingresaron datos");
  }
  return 0;
}
