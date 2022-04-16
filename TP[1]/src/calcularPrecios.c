/*
 ============================================================================
 Name        : TP[1].c
 Author      : Sebastian Sartorato
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "calcularPrecios.h"
#include "mostrarResultados.h"
#include "HardCodeo.h"

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

/**
 * Funcion utilizada para calcular los precios.
 * @param km
 * @param precioAerolineas
 * @param precioLatam
 */
void CalcularPrecios (long double km, long double precioAerolineas, long double precioLatam){

	btc = 4606954.55;

	//a
	tjtaDebitoAero = precioAerolineas - (precioAerolineas * 10) / 100;
	tjtaDebitoLatam = precioLatam - (precioLatam *10 / 100);

	//b
	tjtaCredAero = precioAerolineas + (precioAerolineas *25) / 100;
	tjtaCredLatam = precioLatam + (precioLatam *25 )/ 100;

	//c
	bitcoinAero = precioAerolineas / btc;
	bitcoinLatam = precioLatam / btc;

	//d
	precioKmAero = precioAerolineas / km;
	precioKmLatam = precioLatam / km;

	//e
	if (precioAerolineas > precioLatam){
		difPrecio = precioAerolineas - precioLatam;
	}
	else{
		if(precioAerolineas<precioLatam){
			difPrecio = precioLatam - precioAerolineas;
		}
		else{
			difPrecio = 0;
		}
	}

}
