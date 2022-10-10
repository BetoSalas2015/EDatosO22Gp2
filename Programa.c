//  Sesión 24 - 10/10/2022   -- Plantilla de Ordenamientos
#include <stdio.h>		//  Para la i/o del programa
#include <stdlib.h>		//  Para system() y para los numeros aleatorios
#include <time.h>		//  PAra la función time()

#define pausa system("pause")
#define cls system("cls")

#define SIZE 15			//  Tamaño de mi archivo de Datos

void imprimeArreglo(int arr[])
{
	int i;
	for(i = 0; i < SIZE; i++)
		printf("%d, ", arr[i]);
	putchar('\n');
}

// Programe su algoritmo de Ordenamiento aquí
void nombreAlgoritmo(int arr[])				//  CAMBIE el nombre de la función
{
	//  Escriba su algoritmo de ordenamiento aquí
}

int main()
{
	int arreglo[SIZE], i;

	srand( time(0) );				//  Seed RANDom - Semilla de numeros aleatorios

	for(i = 0; i < SIZE; i++)
		arreglo[i] = rand() % 1000;

	printf("Arreglo desordenado: \n");
	imprimeArreglo(arreglo);

	//  Invoque su algoritmo de ordenamiento aquí
	nombreAlgoritmo(arreglo);

	printf("Arreglo ordenado: \n");
	imprimeArreglo(arreglo);
	
	pausa;
	return 0;
}