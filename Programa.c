//  Sesión 34 - 04/11/2022   -- Apuntadores
#include <stdio.h>		//  Para la i/o del programa
#include <stdlib.h>		//  Para system() y para los numeros aleatorios

#define pausa system("pause")
#define cls system("cls")

int main()
{
	//int Costo = 60;		// DEclaro una variable que guarda enteros llamada Costo
	//int *pointer;		// Declaro una variable que guarda derecciones de memoria donde hay enteros llamado pointer

	//printf("La direccion de memoria de la variable costo es: %p \n", &Costo);
	//printf("La direccion de memoria de la variable pointer es: %p \n", &pointer);

	//pointer = &Costo;	// Guardo la direccion de memoria de Costo en la variable pointer

	//printf("La direccion de memoria guardada en pointer es: %p \n", pointer);
	//printf("El contendo de pointer es %d \n", *pointer);

	//*pointer = 100;
	int a, b, res;
	int *pa, *pb, *pc;

	pa = &a; pb = &b; pc = &res; 

	printf("Dame el primer numero: ");
	scanf("%d", pa );
	printf("Dame el segundo numero: ");
	scanf("%d", pb );

	*pc = *pa + *pb;

	printf("El resultado es: %d\n", *pc);

	pausa;
	return 0;
}