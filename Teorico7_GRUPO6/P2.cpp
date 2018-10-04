#include <stdio.h>

bool checkSqr(int x, int y)
{
	if (x >= -3 && x <= 3 && y >= -3 && y <= 3)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int N, x, y;
	int c = 0;
	printf("Ingrese la cantidad de puntos: ");
	scanf("%d",&N);
	while (c < N)
	{
		printf("Ingrese la cordenada x: ");
		scanf("%d",&x);
		printf("Ingrese la cordenada y: ");
		scanf("%d",&y);
		if (checkSqr(x,y))
		{
			printf("El punto esta dentro del cuadrado.\n");
		}
		else
		{
			printf("El punto no esta dentro del cuadrado.\n");
		}
		c = c + 1;
	}
}
