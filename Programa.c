//  Sesi�n 24 - 10/10/2022   -- Plantilla de Ordenamientos
#include <stdio.h>		//  Para la i/o del programa
#include <stdlib.h>		//  Para system() y para los numeros aleatorios
#include <time.h>		//  PAra la funci�n time()

#define pausa system("pause")
#define cls system("cls")

#define SIZE 15			//  Tama�o de mi archivo de Datos

void imprimeArreglo(int arr[])
{
	int i;
	for(i = 0; i < SIZE; i++)
		printf("%d, ", arr[i]);
	putchar('\n');
}

// Programe su algoritmo de Ordenamiento aqu�
void nombreAlgoritmo(int arr[])				//  CAMBIE el nombre de la funci�n
{
	//  Escriba su algoritmo de ordenamiento aqu�
}

int main()
{
	int arreglo[SIZE], i;

	srand( time(0) );				//  Seed RANDom - Semilla de numeros aleatorios

	for(i = 0; i < SIZE; i++)
		arreglo[i] = rand() % 1000;

	printf("Arreglo desordenado: \n");
	imprimeArreglo(arreglo);

	//  Invoque su algoritmo de ordenamiento aqu�
	nombreAlgoritmo(arreglo);

	printf("Arreglo ordenado: \n");
	imprimeArreglo(arreglo);
	
	pausa;
	return 0;
}