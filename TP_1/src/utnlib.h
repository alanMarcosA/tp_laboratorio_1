/*
 * utnlib.h
 *
 *  Created on: 14 abr 2022
 *      Author: alan
 */

#ifndef UTNLIB_H_
#define UTNLIB_H_

#include <stdio.h>
#include <stdlib.h>
/**
*\ brief leè el numero ingresado por el usuario y lo almacena en una variable
*\ param num (donde se guarda el numero ingresado por es usuario)
*/
void ingresarNumero(int* num);

/**
*\ brief leè el numero ingresado por el usuario y lo almacena en una variable
*\ param num (donde se guarda el numero ingresado por es usuario)
*/
void ingresarDouble(float* num);

/**
*\ brief realiza las operaciones correspondientes y las guarda en las variables correspondientes
*\ param km (ingresa los kilometros para realizar las operaciones)
*\ param precioA (ingresa el precio de Aerolineas para operar)
*\ param precioL (ingresa el precio de Latam para operar)
*\ param precioDebitoA (ingresa donde se guardaran los resultados de las operaciones)
*\ param precioDebitoL (ingresa donde se guardaran los resultados de las operaciones)
*\ param precioCreditoA (ingresa donde se guardaran los resultados de las operaciones)
*\ param precioCreditoL (ingresa donde se guardaran los resultados de las operaciones)
*\ param precioBitA (ingresa donde se guardaran los resultados de las operaciones)
*\ param precioBitL (ingresa donde se guardaran los resultados de las operaciones)
*\ param precioUniA (ingresa donde se guardaran los resultados de las operaciones)
*\ param precioUniL (ingresa donde se guardaran los resultados de las operaciones)
*\ param difPrecio (ingresa donde se guardaran los resultados de las operaciones)
*/
void realizarOperaciones(int* km, float* precioA, float* precioL, float* precioDebitoA, float* precioDebitoL, float* precioCreditoA,float* precioCreditoL, float* precioBitA, float* precioBitL, float* precioUniA, float* precioUniL, float* difPrecio);

/**
*\ brief Imprime por pantalla las informacion de los costos segun corresponda
*\ param precioDebitoA (el costo de realizar el pago con tarjeta de debito en Aerolineas)
*\ param precioDebitoL (el costo de realizar el pago con tarjeta de debito en Latam)
*\ param precioCreditoA (el costo de realizar el pago con tarjeta de credito en Aerolineas)
*\ param precioCreditoL (el costo de realizar el pago con tarjeta de credito en Latam)
*\ param precioBitA (el costo de realizar el pago con Bitcoin en Aerolineas)
*\ param precioBitL (el costo de realizar el pago con Bitcoin en Latam)
*\ param precioUniA (el costo por Km en Aerolineas)
*\ param precioUniL (el costo por Km en Latam)
*\ param difPrecio (la diferencia de costo de viajar en Latam y Aerolineas)
*/
void mostrarResultados(float* precioDebitoA, float* precioDebitoL, float* precioCreditoA,float* precioCreditoL, float* precioBitA, float* precioBitL, float* precioUniA, float* precioUniL, float* difPrecio);

/**
*\ brief Realiza una carga forzada de los datos, luego realiza las
*\ Operaciones y finalmente imprime los datos por pantalla en un formato especifico
*\ param km (ingresa donde se guardaran los kilometros para realizar las operaciones)
*\ param precioA (ingresa donde se guardara el precio de Aerolineas para operar)
*\ param precioL (ingresa donde se guardara el precio de Latam para operar)
*\ param precioDebitoA (ingresa donde se guardaran los resultados de las operaciones)
*\ param precioDebitoL (ingresa donde se guardaran los resultados de las operaciones)
*\ param precioCreditoA (ingresa donde se guardaran los resultados de las operaciones)
*\ param precioCreditoL (ingresa donde se guardaran los resultados de las operaciones)
*\ param precioBitA (ingresa donde se guardaran los resultados de las operaciones)
*\ param precioBitL (ingresa donde se guardaran los resultados de las operaciones)
*\ param precioUniA (ingresa donde se guardaran los resultados de las operaciones)
*\ param precioUniL (ingresa donde se guardaran los resultados de las operaciones)
*\ param difPrecio (ingresa donde se guardaran los resultados de las operaciones)
*/
void cargaDeDatosForzada(int* km, float* precioA, float* precioL, float* precioDebitoA, float* precioDebitoL, float* precioCreditoA,float* precioCreditoL, float* precioBitA, float* precioBitL, float* precioUniA, float* precioUniL, float* difPrecio);

/**
*\ brief realiza el calculo del descuento a realizar
*\ param precioAct (ingresa el precio con el cual operar)
*\ param precioFinal (donde se guarda el precio ya aplicado el descuento)
*/
void aplicarDescuentoDebito(float* precioAct, float* precioFinal);

/**
*\ brief realiza el calculo del incremento a realizar
*\ param precioAct (ingresa el precio con el cual operar)
*\ param precioFinal (donde se guarda el precio ya aplicado el incremento)
*/
void aplicarInteresCredito(float* precioAct, float* precioFinal);

/**
*\ brief realiza el calculo para pasar de pesos a BTC
*\ param precioAct (ingresa el precio con el cual operar)
*\ param precioFinal (donde se guarda el precio ya pasado a BTC)
*/
void precioEnBit(float* precioAct, float* precioFinal);

/**
*\ brief realiza el calculo obtener el precio por kilometro
*\ param precioAct (ingresa el precio con el cual operar)
*\ param km (ingresa los Km con el cual operar)
*\ param precioFinal (donde se guarda el precio por Km)
*/
void precioPorKm(float* precioAct,int* km, float* precioFinal);

/**
*\ brief realiza el calculo obtener la diferencia en el precio Latam y el de Aerolineas
*\ param precioA (ingresa el precio de Aerolineas con el cual operar)
*\ param precioL (ingresa el precio de Latam con el cual operar)
*\ param precioFinal (donde se guarda la diferencia de precios)
*/
void diferencia(float* precioA, float* precioL, float* diferencia);

/**
*\ brief imprime por pantalla una opcion del menu de Opciones verificando si tiene un dato cargado
*\ param km (ingresa los Km que se van a imprimir)
*\ param flagKm (ingresa un flag para determinar si imprimir o no el parametro anterior)
*/
void imprimirOpcionUno(int* km, int* flagKm);

/**
*\ brief imprime por pantalla una opcion del menu de Opciones verificando si tiene cargado los datos
*\ param precioA (ingresa el precio de Aerolineas que se van a imprimir)
*\ param precioL (ingresa el precio Latam que se va a imprimir)
*\ param flagPrecio (ingresa el flag para decidir que imprimir)
*/
void imprimirOpcionDos(float* precioA, float* precioL, int* flagPrecio);

#endif /* UTNLIB_H_ */
