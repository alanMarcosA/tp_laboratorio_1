/*
 ============================================================================
 Name        : TP_1.c
 Author      : Aspi Alan Marcos
 Version     :
 Copyright   : div F
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utnlib.h"

int main(void) {
	setbuf(stdout, NULL);

	int opcion;
	int km;
	float precioAerolineas;
	float precioLatam;

	float precioDebitoA;
	float precioDebitoL;
	float precioCreditoA;
	float precioCreditoL;
	float precioBitA;
	float precioBitL;
	float precioUniA;
	float precioUniL;
	float difPrecio;

	int flagKm=-1;
	int flagPrecio=-1;
	int flagMostrar=-1;
	do{
		printf("MENU\n");
		imprimirOpcionUno(&km, &flagKm);
		imprimirOpcionDos(&precioAerolineas, &precioLatam, &flagPrecio);
		printf("3. Calcular todos los costos:\n");
		printf("\t a) Tarjeta de débito (descuento 10%%) \n");
		printf("\t b) Tarjeta de crédito (interés 25%%) \n");
		printf("\t c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos) \n");
		printf("\t d) Mostrar precio por km (precio unitario) \n");
		printf("\t e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas) \n");
		printf("4. Informar Resultados \n");
		printf("5. Carga forzada de datos \n");
		printf("6. Salir\n");
		printf("eleija una opcion:");
		ingresarNumero(&opcion);

		switch (opcion) {
				case 1:
					printf("ingrese los kilometros");
					ingresarNumero(&km);
					flagMostrar=-1;
					flagKm=1;
					break;
				case 2:
					printf("ingrese el precio de Aerolineas");
					ingresarDouble(&precioAerolineas);
					printf("ingrese el precio Latam");
					ingresarDouble(&precioLatam);
					flagMostrar=-1;
					flagPrecio=1;
					break;
				case 3:
					if(flagPrecio==1 && flagKm==1){
						realizarOperaciones(&km, &precioAerolineas, &precioLatam,&precioDebitoA, &precioDebitoL, &precioCreditoA, &precioCreditoL, &precioBitA, &precioBitL, &precioUniA, &precioUniL, &difPrecio);
						flagMostrar=1;
					}else{
						printf("Debe ingresar los KM y precios de vuelo para realizar esta operacion \n");
					}
					break;
				case 4:
					if(flagMostrar==1){
						mostrarResultados(&precioDebitoA, &precioDebitoL, &precioCreditoA, &precioCreditoL, &precioBitA, &precioBitL, &precioUniA, &precioUniL, &difPrecio);
					}else{
						printf("Primero debe calcular los costos \n");
					}
					break;
				case 5:
					cargaDeDatosForzada(&km, &precioAerolineas, &precioLatam, &precioDebitoA, &precioDebitoL, &precioCreditoA, &precioCreditoL, &precioBitA, &precioBitL, &precioUniA, &precioUniL, &difPrecio);
					flagMostrar=1;
					flagPrecio=1;
					flagKm=1;
					break;
			}
	}while(opcion!=6);

	return EXIT_SUCCESS;
}

