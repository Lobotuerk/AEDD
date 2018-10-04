#include <stdlib.h>
#include <stdio.h>
int n, i, leg[100], b, auxl, auxp, k;
float prom[100];
bool vf;
void carga(int i, float *prom, int n, int *leg) {
  for (i = 0; i < n; i++) {
    printf("Ingrese el legajo");
    scanf("%d", &leg[i]);
    printf("Ingrese el promedio");
    scanf("%f", &prom[i]);
  }
}
void ordenamiento(float *prom, int *leg, int auxl, int auxp, int b, int i, int n) {
  do {
    b = 0;
    for (i = 0; i < n; i++) {
      if (prom[i] < prom[i + 1]) {
        auxl = leg[i];
        leg[i] = leg[i + 1];
        leg[i + 1] = auxl;
        auxp = prom[i];
        prom[i] = prom[i + 1];
        prom[i + 1] = auxp;
        b = 1;
      }
    }
  }
  while (b == 1);
  for (i = 0; i < 3; i++) {
    printf("Promedio [i+1]=%f", prom[i]);
  }
}
bool busqueda(int *leg, int k, int i, int n, bool vf, int b) {
  for (i = 0; i < n; i++) {
    if (leg[i] == k) {
      vf = true;
      b = 1;
    }
  }
  if (b == 0) {
    vf = false;
  }
  return vf;
}
main() {
  printf("Ingrese la cantidad de alumnos");
  scanf("%d", & n);
  carga(i, prom, n, leg);
  ordenamiento(prom, leg, auxl, auxp, b, i, n);
  printf("Ingrese el legajo a buscar");
  scanf("%d", & k);
  vf = busqueda(leg, k, i, n, vf, b);
  if (vf == true) {
    printf("El legajo se encuentra entre los ingresados");
  } else {
    printf("El legajo no se encuentra entre los ingresados");
  }
}
