/*
 ============================================================================
 Name        : UF1287EJ1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 10
#include "vectoresEX.h"

int main(void) {
	double potencias[MAX];

	puts("Introduce los 10 valores de potencia");
	introduceKvatios(MAX,potencias);

	puts("Las potencias en CV son: ");
	muestraProduccionCV(MAX, potencias);

	printf("\nSe ha producido un incremento al alza en %d ocasiones\n",
			numSubidasProduccion(MAX,potencias));


	return EXIT_SUCCESS;
}
