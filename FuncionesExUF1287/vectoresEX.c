/*
 * vectoresEX.c
 *
 *  Created on: 23 nov 2023
 *      Author: Usuario
 */
#include <stdio.h>
#define ACV 1.3596
#include "vectoresEX.h"

	void introduceKvatios(int tam, double kw[]) {
		int i;
		for(i=0; i<tam; i++) {
			printf("Introduce la potencia %d: ", i+1);
			fflush(stdout);
			scanf("%lf", &kw[i]);
		}
	}

	void muestraProduccionCV(int tam, double kw[]) {
		int i;
		double cv;

		for(i=0; i<tam;i++) {
			// kw[i]=kw[i]*ACV; Peligro
			cv=kw[i]*ACV;
			printf("%lf\t ", cv);
		}
	}


	int numSubidasProduccion(int tam, double kw[]) {
		int contador=0;
		int i;

		for (i=0;i<tam-1;i++) {
			if(kw[i+1]>kw[i]) {
				contador++;
			}
		}
		return contador;
	}
