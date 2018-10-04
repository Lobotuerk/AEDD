#include<stdio.h>

int detDescuentos20(float promedios[100], int n)
{
	int cuenta = 0;
	for (int i = 0; i < n; i++)
	{
		if (promedios[i] >= 9.0)
		{
			cuenta = cuenta + 1;
		}
	}
	return cuenta;
}

int detDescuentos10(float promedios[100], int n)
{
	int cuenta = 0;
	for (int i = 0; i < n; i++)
	{
		if (promedios[i] >= 8.0 && promedios[i] < 9.0)
		{
			cuenta = cuenta + 1;
		}
	}
	return cuenta;
}

int main()
{
	float promedios[100];
	int n, c20, c10, c0;
	printf("Indique la cantidad de alumnos: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Indique la nota del alumno %d", i);
		scanf("%f",&promedios[i]);
	}
	c20 = detDescuentos20(promedios, n);
	c10 = detDescuentos10(promedios, n);
	c0 = n - c10 - c20;
	printf("Habra %d alumnos con 20 por ciento de descuento", c20);
	printf("Habra %d alumnos con 10 por ciento de descuento", c10);
	printf("Habra %d alumnos con 0 por ciento de descuento", c0);
	return 0;
}
