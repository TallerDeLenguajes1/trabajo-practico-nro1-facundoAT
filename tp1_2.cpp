/*
 ============================================================================
 Name        : tpdeTaller2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int cuadrado (int n); //i
void cuadrado2(int *punt); //ii 
void mostrar(int x); //iii
void invertir(int *var,int *a); //iv
void MayorMenor(int *var, int *a); //v

int main(void) {
	int var,x;
	int a;
	puts("Ingrese 2 numeros");
   puts("El primero sera elevado el cuadrado");
   scanf("%d",&var);
   scanf("%d",&a);

	x=cuadrado(var);
	printf("i)Cuadrado %d",x);

	cuadrado2(&var);
	printf("\nii)Cuadrado %d",var);

	printf("\nMando la variable elevada %d",var);
	mostrar(var);

	printf("\niv)\nAntes de invertir a:%d b:%d",var ,a);
	invertir(&var,&a);
	printf("\nDespues de invertir a:%d b:%d",var ,a);

	printf("\nv)\nAntes de ordenar a:%d b:%d",var ,a);
	MayorMenor(&var,&a);
	printf("\nDespues de ordenar a:%d b:%d",var ,a);


	return EXIT_SUCCESS;
}
int cuadrado (int n){
  n=n*n;
   return(n);
}
void cuadrado2(int *punt){
   int n=*punt * *punt;
   *punt=n;
}
void mostrar(int x){
   printf("\niii)\nDireccion de variable: %p",&x);
   printf("\nContenido de la variable: %d",x);
}
void invertir(int *a,int *b){
   int aux;
   aux=*a;
   *a=*b;
   *b=aux;
}
void MayorMenor(int *var, int *a){
   if(*var<*a){
      invertir(var,a);
   }else{if(*var==*a){
      puts("\nSon valores iguales");
   }
   }
}
