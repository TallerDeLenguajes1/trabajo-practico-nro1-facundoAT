/*
 ============================================================================
 Name        : tpdeTaller.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x=10;
	int *p_x=&x;
	printf("1-Contenido del puntero: %d",*p_x);
	printf("\n2-Direccion de memoria almacenada por el puntero: %p",p_x);
	printf("\n3-Direccion de memoria de la variable: %p",&x);
	printf("\n4-Direccion de memoria del puntero: %p",&p_x);
	int var=sizeof(*p_x);
	printf("\n5-Tamaño de memoria utilizado: %d",var);
	/*En 2 y 3 el resultado es el mismo pues en los dos estoy mostrando
	  la direcion de memoria de mi variable x, pero de distinta manera.
	  En el 4 obtengo la direccion de memoria de mi puntero. No es igual
	  a las anteriores porque es otro espacio de memoria. */

	return EXIT_SUCCESS;
}
