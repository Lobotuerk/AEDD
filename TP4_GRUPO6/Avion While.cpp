#include <stdio.h>
#include <stdlib.h>

int cod,tiempo,pasajeros,altura;
int v1t = 0;
int v1p = 0;
int v1h = 0;
int v1c = 0;
int v2t = 0;
int v2p = 0;
int v2h = 0;
int v2c = 0;
int v3t = 0;
int v3p = 0;
int v3h = 0;
int v3c = 0;
int v4t = 0;
int v4p = 0;
int v4h = 0;
int v4c = 0;
int maxH = 0;
int maxCod = 0;
int maxP = 0;

int main()
{
    printf ("Ingrese Codigo de vuelo: ");
    scanf ("%d",&cod);
    while (cod != 0)
    {
        printf ("Ingrese Duracion total del vuelo: ");
        scanf ("%d",&tiempo);
        printf ("Ingrese Cantidad de pasajeros del vuelo: ");
        scanf ("%d",&pasajeros);
        printf ("Ingrese Altura maxima del vuelo: ");
        scanf ("%d",&altura);
        if (cod == 1)
        {
            v1t = v1t + tiempo;
            v1p = v1p + pasajeros;
            v1h = v1h + altura;
            v1c = v1c + 1;
        }
        if (cod == 2)
        {
            v2t = v2t + tiempo;
            v2p = v2p + pasajeros;
            v2h = v2h + altura;
            v2c = v2c + 1;
        }
        if (cod == 3)
        {
            v3t = v3t + tiempo;
            v3p = v3p + pasajeros;
            v3h = v3h + altura;
            v3c = v3c + 1;
        }
        if (cod == 4)
        {
            v4t = v4t + tiempo;
            v4p = v4p + pasajeros;
            v4h = v4h + altura;
            v4c = v4c + 1;
        }
        if (pasajeros > maxP && cod < 5 && cod > 0)
        {
            maxH = altura;
            maxCod = cod;
            maxP = pasajeros;
        }
        printf ("Ingrese Codigo de vuelo: ");
        scanf ("%d",&cod);
    }
    printf("Avion 1: Tiempo Volado: %d:%d hs, %d min\n", v1t/60, v1t%60, v1t);
    printf("Avion 2: Tiempo Volado: %d:%d hs, %d min\n", v2t/60, v2t%60, v2t);
    printf("Avion 3: Tiempo Volado: %d:%d hs, %d min\n", v3t/60, v3t%60, v3t);
    printf("Avion 4: Tiempo Volado: %d:%d hs, %d min\n", v4t/60, v4t%60, v4t);
    if (v1c != 0) printf("Avion 1: Promedio de alturas: %d metros\n", v1h/v1c);
    else printf("Avion 1: Promedio de alturas: 0 metros\n");
    if (v2c != 0) printf("Avion 2: Promedio de alturas: %d metros\n", v2h/v2c);
    else printf("Avion 2: Promedio de alturas: 0 metros\n");
    if (v3c != 0) printf("Avion 3: Promedio de alturas: %d metros\n", v3h/v3c);
    else printf("Avion 3: Promedio de alturas: 0 metros\n");
    if (v4c != 0) printf("Avion 4: Promedio de alturas: %d metros\n", v4h/v4c);
    else printf("Avion 4: Promedio de alturas: 0 metros\n");
    printf("Avion que mayor cantidad de pasajeros transporto: Avion %d con %d pasajeros\n",
    maxCod, maxP);
    printf("Avion 1: Cantidad de pasajeros transportados: %d pasajeros\n", v1p);
    printf("Avion 2: Cantidad de pasajeros transportados: %d pasajeros\n", v2p);
    printf("Avion 3: Cantidad de pasajeros transportados: %d pasajeros\n", v3p);
    printf("Avion 4: Cantidad de pasajeros transportados: %d pasajeros\n", v4p);
    return 0;
}