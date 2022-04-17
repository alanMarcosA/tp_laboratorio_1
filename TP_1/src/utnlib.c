/*
 * utnlib.c
 *
 *  Created on: 14 abr 2022
 *      Author: alan
 */
#include "utnlib.h"

void ingresarDouble(float* num){
	scanf("%f",num);
}
void ingresarNumero(int* num){
	scanf("%d",num);
	while(num<=0){
		printf("error. ingrese un numero positivo:");
		scanf("%d",num);
	}
}

void imprimirOpcionUno(int* km, int* flagKm){
	if(*flagKm==-1){
		printf("1. Ingresar Kilómetros: ( km=x)\n");
	}else{
		printf("1. Ingresar Kilómetros: ( km=%d)\n", *km);
	}
}

void imprimirOpcionDos(float* precioA, float* precioL, int* flagPrecio){
	if(*flagPrecio==-1){
		printf("2. Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)\n");
	}else{
		printf("2. Ingresar Precio de Vuelos: (Aerolíneas=%.2f, Latam=%.2f)\n", *precioA, *precioL);
	}
}

void realizarOperaciones(int* km, float* precioA, float* precioL, float* precioDebitoA, float* precioDebitoL, float* precioCreditoA,float* precioCreditoL, float* precioBitA, float* precioBitL, float* precioUniA, float* precioUniL, float* difPrecio){
	aplicarDescuentoDebito(precioA, precioDebitoA);
	aplicarDescuentoDebito(precioL, precioDebitoL);
	aplicarInteresCredito(precioA, precioCreditoA);
	aplicarInteresCredito(precioL, precioCreditoL);
	precioEnBit(precioA, precioBitA);
	precioEnBit(precioL, precioBitL);
	precioPorKm(precioA, km, precioUniA);
	precioPorKm(precioL, km, precioUniL);
	diferencia(precioA, precioL, difPrecio);
}

void mostrarResultados(float* precioDebitoA, float* precioDebitoL, float* precioCreditoA,float* precioCreditoL, float* precioBitA, float* precioBitL, float* precioUniA, float* precioUniL, float* difPrecio){
	printf("Latam \n");
	printf("a) Precio con tarjeta de débito: $%.2f \n",*precioDebitoL);
	printf("b) Precio con tarjeta de crédito: $%.2f \n", *precioCreditoL);
	printf("c) Precio pagando con bitcoin : %f BTC\n", *precioBitL);
	printf("d) Precio unitario: $%.2f \n", *precioUniL);

	printf("Aerolineas \n");
	printf("a) Precio con tarjeta de débito: $%.2f \n",*precioDebitoA);
	printf("b) Precio con tarjeta de crédito: $%.2f \n", *precioCreditoA);
	printf("c) Precio pagando con bitcoin : %f BTC\n", *precioBitA);
	printf("d) Precio unitario: $%.2f \n", *precioUniA);
	printf("La diferencia de precio es : $%.2f \n", *difPrecio);
}

void cargaDeDatosForzada(int* km, float* precioA, float* precioL, float* precioDebitoA, float* precioDebitoL, float* precioCreditoA,float* precioCreditoL, float* precioBitA, float* precioBitL, float* precioUniA, float* precioUniL, float* difPrecio){
	*km=7090;
	*precioA=162965;
	*precioL=159339;
	realizarOperaciones(km, precioA, precioL, precioDebitoA, precioDebitoL, precioCreditoA, precioCreditoL, precioBitA, precioBitL, precioUniA, precioUniL, difPrecio);
	printf("\n KMs Ingresados: %d km \n",*km);

	printf("\n Precio Aerolineas: $%.2f \n",*precioA);
	printf("a) Precio con tarjeta de débito: $ %.2f \n",*precioDebitoA);
	printf("b) Precio con tarjeta de crédito: $ %.2f \n", *precioCreditoA);
	printf("c) Precio pagando con bitcoin : %f BTC \n", *precioBitA);
	printf("d) Mostrar precio unitario: $ %.2f \n", *precioUniA);


	printf("\n Precio Latam: $%.2f \n",*precioL);
	printf("a) Precio con tarjeta de débito: %.2f \n",*precioDebitoL);
	printf("b) Precio con tarjeta de crédito: %.2f \n", *precioCreditoL);
	printf("c) Precio pagando con bitcoin : %f BTC \n", *precioBitL);
	printf("d) Mostrar precio unitario: %.2f \n", *precioUniL);

	printf("\n La diferencia de precio es : $ %.2f \n", *difPrecio);
}

void aplicarDescuentoDebito(float* precioAct, float* precioFinal){
	*precioFinal=*precioAct*0.9;
}

void aplicarInteresCredito(float* precioAct, float* precioFinal){
	*precioFinal=*precioAct*1.25;
}

void precioEnBit(float* precioAct, float* precioFinal){
	*precioFinal=*precioAct/4606954.55;
}

void precioPorKm(float* precioAct,int* km, float* precioFinal){
	*precioFinal=*precioAct/(*km);
}

void diferencia(float* precioA, float* precioL, float* diferencia){
	*diferencia=*precioL - (*precioA);
}
