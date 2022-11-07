//  Sesión 35 - 07/11/2022   -- Apuntadores
#include <stdio.h>		//  Para la i/o del programa
#include <stdlib.h>		//  Para system() y para los numeros aleatorios

#define pausa system("pause")
#define cls system("cls")

int square(int *num);


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
	//int a, b, res;
	//int *pa, *pb, *pc;

	//pa = &a; pb = &b; pc = &res; 

	//printf("Dame el primer numero: ");
	//scanf("%d", pa );
	//printf("Dame el segundo numero: ");
	//scanf("%d", pb );

	//*pc = *pa + *pb;

	//printf("El resultado es: %d\n", *pc);

	int *pointer,i;
	int	arreglo[5]; 
	int *ptrarr[5];			//  Declaro un arreglo de Apuntadores a entero

	printf("El tamaño de el apuntador a enteros es: %d\n", sizeof(int *) );
	printf("El tamaño de el apuntador a enteros es: %d\n", sizeof(double *) );
	printf("El tamaño de el apuntador a enteros es: %d\n", sizeof(char *) );

	printf("La dirección de Memeoria de arreglo[0] es %p\n", &arreglo[0]);
	printf("La dirección de Memeoria de arreglo[1] es %p\n", &arreglo[1]);
	printf("La dirección de Memeoria de arreglo[2] es %p\n", &arreglo[2]);
	printf("La dirección de Memeoria de arreglo[3] es %p\n", &arreglo[3]);
	printf("La dirección de Memeoria de arreglo[4] es %p\n", &arreglo[4]);

	pointer = arreglo;		// Especifico el elemento del arreglo al cual voy a apuntar

	printf("LA dirección guardada en pointer es %p\n", pointer);

	//-------------------------------------------------------------
	 
	for(i = 0; i < 5; i++)
	{
		ptrarr[i] = &arreglo[i];
		printf("LA dirección guardada en arrptr[%d] es %p\n", i, ptrarr[i]);
	}
	
	i = 5;
	square(&i);

	printf("i = %d\n", i);

	pausa;
	return 0;
}

int square(int *num)
{
	return num + (*num++);
}