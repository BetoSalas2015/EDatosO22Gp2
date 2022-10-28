//  Sesión 24 - 10/10/2022   -- Plantilla de Ordenamientos
#include <stdio.h>		//  Para la i/o del programa
#include <stdlib.h>		//  Para system() y para los numeros aleatorios
#include <time.h>		//  PAra la función time()

#define pausa system("pause")
#define cls system("cls")

#define SIZE 15000			//  Tamaño de mi archivo de Datos

void imprimeArreglo(int arr[])
{
	int i;
	for(i = 0; i < SIZE; i++)
		printf("%d, ", arr[i]);
	putchar('\n');
}

void binaria(int arr[], int linf, int lsup, int dato)
{
	//
}

void secuencial(int arr[], int tamaño, int dato)
{
	int i, indice;
	for(i = 0; i < tamaño; i++)
	{
		if(arr[i] == dato)
		{
			printf("El numero buscado esta en el indice %d\n", i);
			return;
		}
	}
	printf("El dato %d no se encuentra en el archivo.\n", dato);
	return;
}


int main()
{
	int arreglo[SIZE], i, dato;
	int incr[] = {3, 2, 1};

	srand( time(0) );				//  Seed RANDom - Semilla de numeros aleatorios

	for(i = 0; i < SIZE; i++)
		arreglo[i] = rand() % 1000;

	printf("Arreglo desordenado: \n");
	imprimeArreglo(arreglo);

	printf("Dame el dato a buscar: ");
	scanf("%d", &dato);

	secuencial(arreglo, SIZE, dato);
	binaria(arreglo, 0, SIZE, dato);


	//printf("Arreglo ordenado: \n");
	//imprimeArreglo(arreglo);
	
	pausa;
	return 0;
}