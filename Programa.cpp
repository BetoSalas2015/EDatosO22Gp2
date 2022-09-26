//  Sesión 18 - 26/09/2022   -- Recursividad o recursión 
#include <stdio.h>		//  Para la i/o del programa
#include <stdlib.h>		//  Para system()

#define pausa system("pause")	

//  Función factorial iterativo
int factoriali(int n)
{
	int fact = 1, i;
	for(i = 1; i <= n; i++)
		fact = fact * i;
	return fact;
}

//		n! = 1					Si n = 1
//		n! = n * (n - 1)!		Si n > 1
int factorial(int n)
{
	if( n == 1 )						// Si n = 1 (criterio de paro)	
		return 1;						// n! = 1
	else								// Si n > 1
		return n * factorial( n - 1 );	// n! = n * ( n - 1 )!
}

 
int main()			
 {					
	printf("El factorial iterativo de 5 es %d \n", factoriali(5) );
	printf("El factorial recursivo de 5 es %d \n", factorial(5) );


	pausa;
 }