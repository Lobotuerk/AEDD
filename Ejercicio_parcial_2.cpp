#include <stdio.h>
#include <stdlib.h>

int n, i, p1=0, p2=0, p3=0;
float c1, c2, c3;
int *vector;

 void porcentaje (int p, int n, float &c){
 	c = (float) p/n*100;
 }

 int main () {
 	printf ("Ingrese la cantidad de jugadoras de Hockey: ");
 	scanf("%d", &n);
  vector = (int*)malloc(sizeof(int) * n);
 	for(i=0;i<n;i++){
 		printf("Ingrese la edad de la %dº jugadora: ", i+1);
 		scanf("%d", &vector[i]);
 		if (vector[i]>=6&&vector[i]<=11){
 			p1=p1+1;
 		}
 		if (vector[i]>=12&&vector[i]<=16){
 			p2=p2+1;
 		}
 		if (vector[i]>=17){
 			p3=p3+1;
 		}

 	}
 	porcentaje(p1, n, c1);
 	printf ("\nEl porcentaje de jugadoras en infantiles es: %f", c1);
 	porcentaje(p2, n, c2);
 	printf ("\nEl porcentaje de jugadoras en juveniles es: %f", c2);
 	porcentaje(p3, n, c3);
 	printf ("\nEl porcentaje de jugadoras en intermedia y primera es: %f", c3);
  }
