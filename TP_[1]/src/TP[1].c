/*
 ============================================================================
 Name        : TP[1].c
 Author      : Sebastian Sartorato
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "pedirNumeros.h"
#include "calcularPrecios.h"
#include "mostrarResultados.h"
#include "HardCodeo.h"

#define SALIR 6

	long double x, y, z;
	long double tjtaDebitoAero;
	long double tjtaDebitoLatam;
	long double tjtaCredAero;
	long double tjtaCredLatam;
	long double btc;
	long double bitcoinAero;
	long double bitcoinLatam;
	long double precioKmAero;
	long double precioKmLatam;
	long double difPrecio;
int main(void) {
		setbuf(stdout, NULL);
	int opcion;
	int flagX;
	int flagY;
	int flagKm;
	int flagPrecio;
	int flagHardcodeo;

	flagX = 1;
	flagY = 1;
	flagKm = 1;
	flagPrecio = 1;
	flagHardcodeo = 1;

	do
	{

		if (flagX == 1){
			printf("1. Ingresar Kilómetros: (km).\n");
		}
		else{
			__mingw_printf("1. Ingresar Kilómetros: (km = %.2Lf).\n", x);
		}
		if (flagY == 1){
			printf("2. Ingresar Precio de Vuelos: (Aerolíneas, Latam).\n");
			printf("\t- Precio vuelo Aerolíneas:\n");
			printf("\t- Precio vuelo Latam:\n");
		}
		else{
			printf("2. Ingresar Precio de Vuelos: (Aerolíneas, Latam)\n");
			__mingw_printf("\t- Precio vuelo Aerolíneas: $%.2Lf\n", y);
			__mingw_printf("\t- Precio vuelo Latam: $%.2Lf\n", z);
		}


		printf("3. Calcular todos los costos:\n");
		printf("\ta) Tarjeta de débito (descuento 10 %%)\n");
		printf("\tb) Tarjeta de crédito (interés 25 %%) \n");
		printf("\tc) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)\n");
		printf("\td) Mostrar precio por km (precio unitario)\n");
		printf("\te) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)\n");
		printf("4. Informar Resultados\n");
		printf("\t“Latam:\n");
		printf("\ta) Precio con tarjeta de débito: \n");
		printf("\tb) Precio con tarjeta de crédito: \n");
		printf("\tc) Precio pagando con bitcoin : \n");
		printf("\td) Precio unitario: \n");
		printf("\tAerolíneas:\n");
		printf("\ta) Precio con tarjeta de débito: \n");
		printf("\tb) Precio con tarjeta de crédito: \n");
		printf("\tc) Precio pagando con bitcoin : \n");
		printf("\td) Precio unitario: \n");
		printf("La diferencia de precio es : “\n");
		printf("5. Carga forzada de datos \n");
		printf("6. Salir\n");
		printf("Elija una opción: ");
		scanf("%d", &opcion);

		switch(opcion)
		{
		case 1:

			x = PedirFlotante("Ingrese los km por favor: ");
			flagX = 0;
			flagKm = 0;
			system("pause");

			break;
		case 2:

			y = PedirFlotante("Ingrese el precio de Aerolineas: ");
			y = ValidarFlotante (y);
			z = PedirFlotante ("Ingrese el precio de Latam:  ");
			y = ValidarFlotante (y);
			system("pause");

			flagY=0;
			flagPrecio = 0;
			break;
		case 3:
			if (flagKm == 0 && flagPrecio == 0){
				CalcularPrecios (x,y,z);
				printf("Precios calculados.");
			}
			else
			{
				if (flagHardcodeo == 0){
					CalcularPrecios (x,y,z);
					printf("Precios calculados.");
				}
				else{
					printf("Error. Faltan ingresar datos...\n");
				}

			}
			system("pause");
			break;
		case 4:

			if ((flagKm==1 || flagPrecio ==1) && flagHardcodeo ==1){
				printf("Error. No se han ingresado suficientes datos para mostrar.\n");
			}

			if (flagKm == 0 && flagPrecio == 0){
				MostrarResultados();
			}
			else{
				if (flagHardcodeo==0){
					MostrarHardcodeo();
				}
			}

			system("pause");
			break;
		case 5:
			HardCodeo();
			CalcularPrecios (x,y,z);
			flagHardcodeo = 0;

		system("pause");
		break;
		default:
			printf("Programa finalizado.");
			break;
		}

	}

	while (opcion != SALIR);
	return EXIT_SUCCESS;
}
