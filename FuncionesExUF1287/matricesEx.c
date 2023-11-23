/*
 * matricesEx.c
 *
 *  Created on: 23 nov 2023
 *      Author: Usuario
 */


#include "matricesEx.h"


double mediaHora(int filas, int cols, double matriz[][MAX], int hora){
	int j;
	double suma=0;
	if (hora<0 || hora>filas) {
		return 0;
	}

	for (j=0; j<cols; j++) {
		suma=suma+matriz[hora][j];
	}

//	for (i=0;i<filas;i++) {
//		for (j=0;j<cols;j++) {
//			if(i==hora) {
//				suma=suma+matriz[i][j];
//			}
//		}
//	}
	return suma/cols;

}

	int cuantasVeces(int filas, int cols, double matriz[][MAX], double potencia){
		int i,j;
		int contador=0;

		for (i=0;i<filas;i++) {
			for (j=0;j<cols;j++) {
				if(matriz[i][j]>=potencia) {
					contador++;
				}
			}
		}
		return contador;
	}



