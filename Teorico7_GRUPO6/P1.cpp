#include <stdio.h>

void sueldo(float ch, float vh, float &total)
{
	if (ch > 0)
	{
		if (ch > 60)
		{
			ch = ch * 1.05;
		}
		ch = ch * 0.89 * 0.97;
		total = ch * vh;
	}
	else
	{
		total = 0;
	}
}

int main()
{
	float ch,vh,total,suma;
	suma = 0;
	printf("Ingrese valor de horas a pagar: ");
	scanf("%f",&vh);
	while (vh != 0)
	{
		printf("Ingrese cantidad de horas trabajadas: ");
		scanf("%f",&ch);
		sueldo(ch,vh,total);
		printf("Se le debe pagar %.2f\n", total);
		suma = suma + total;
		printf("Ingrese valor de horas a pagar: ");
		scanf("%f",&vh);
	}
	printf("El total a pagar por la fabrica es %.2f", suma);
	return 0;
}
