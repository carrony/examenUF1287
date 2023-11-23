/*
 ============================================================================
 Name        : UF1287EJ2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "matricesEx.h"
#define MAXHORA 12

int main(void) {
	double matrizPotencias[][7] = {
	 {122.33, 125.92, 109.66, 115.75, 108.02, 114.16, 105.25},
	 {121.50, 103.60, 126.29, 125.19, 105.05, 100.90, 107.96},
	 {114.23, 120.18, 108.54, 111.43, 126.63, 122.54, 115.46},
	 {118.96, 110.91, 112.00, 115.29, 115.63, 122.92, 104.25},
	 {124.02, 125.03, 106.25, 110.11, 116.38, 114.18, 110.04},
	 {123.03, 127.21, 127.34, 102.76, 109.72, 125.25, 103.82},
	 {112.62, 129.07, 109.95, 119.59, 123.00, 120.88, 108.15},
	 {113.69, 125.48, 122.93, 104.94, 102.99, 112.15, 106.99},
	 {110.03, 118.92, 114.23, 117.31, 120.80, 119.88, 130.64},
	 {122.22, 122.56, 124.98, 128.82, 107.91, 125.75, 126.96},
	 {104.70, 108.39, 106.61, 107.79, 107.14, 106.21, 127.66},
	 {128.51, 122.81, 116.32, 124.67, 121.81, 128.91, 129.23}
	 };

	int hora;
	double potencia;

	do{
		printf("introduce la hora a comprobar (0-%d)",MAXHORA-1);
		fflush(stdout);
		scanf("%d", &hora);
	} while( hora<0 || hora>= MAXHORA);

	printf("\nLa media de potencia de la hora %d es %lf Kw", hora,
			mediaHora(MAXHORA,7, matrizPotencias, hora ));


	printf("\nintroduce la potencia a buscar ");
	fflush(stdout);
	scanf("%lf", &potencia);
	printf("La potencia %lf se ha alcanzado %d veces en el período analizado",
			potencia, cuantasVeces(MAXHORA,7,matrizPotencias,potencia));



	return EXIT_SUCCESS;
}
