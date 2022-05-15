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
	 * Función utilizada para hardcodear los valores de kilometros y precios de las marcas.
	 */
void HardCodeo(void){
	x = 7090; //Kilometros
	y= 162965; //Precio Aerolineas
	z = 159339; //Precio Latam
}

/**
 * Función utilizada para mostrar en consola los datos hardcodeados.
 */
void MostrarHardcodeo (void){

	__mingw_printf("KMs Ingresados: $ %.2Lf km\n", x);
	printf("\n");
	__mingw_printf("Precio Aerolineas: $ %.2Lf\n",y);
	__mingw_printf("a) Precio con tarjeta de debito: $ %.2Lf\n", tjtaDebitoAero);
	__mingw_printf("b) Precio con tarjeta de credito : $ %.2Lf\n", tjtaCredAero);
	__mingw_printf("c) Precio pagando con bitcoin: %.2Lf BTC\n", bitcoinAero);
	__mingw_printf("d) Mostrar precio unitario: $ %.2Lf\n", precioKmAero);
	printf("\n");
	__mingw_printf("Precio latam: $ %.2Lf\n", z);
	__mingw_printf("a) Precio con tarjeta de debito: $ %.2Lf\n", tjtaDebitoLatam);
	__mingw_printf("b) Precio con tarjeta de credito : $ %.2Lf\n", tjtaCredLatam);
	__mingw_printf("c) Precio pagando con bitcoin: %.2Lf BTC\n", bitcoinLatam);
	__mingw_printf("d) Mostrar precio unitario: $ %.2Lf\n", precioKmLatam);
	printf("\n");
	__mingw_printf("La diferencia de precio es: $ %.2Lf\n", difPrecio);

}
