/*
 * funciones.c
 */

#include <stdio.h>
#include <stdlib.h>
#include "pedirNumeros.h"
#include "calcularPrecios.h"
/**
 *Función utilizada para pedir un número flotante
 * Recibe como @param un mensaje pidiendo un cierto numero flotante en double
 * @return un numero ingresado como long double
 */
float PedirFlotante(char mensaje []){
		setbuf(stdout, NULL);

	double valor, valorValidado;

	printf(mensaje);
	fflush(stdin);
	scanf("%lf", &valor);

	valorValidado = ValidarFlotante (valor);

	long double flotante = valorValidado;

	return flotante;
}
/**
 * Funcion utilizada para validar que no sean números negativos los ingresados.
 * @param recibe el valor ingresado.
 * @return retorna el valor validado.
 */
float ValidarFlotante (double valor){
	while (valor<0){
		printf("Error. No puede ingresar numeros negativos, vuelva a intentarlo: ");
		scanf("%lf", &valor);
	}
	return valor;
}


