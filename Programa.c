//  Sesión 19 - 28/09/2022   -- Recursividad o recursión 
#include "estructura.h"

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

//    (a * b) = a				Si b = 1
//	  (a * b) = a + (a * b-1)	Si b > 1
int multiplica(int a, int b)
{
	if( b == 1)
		return a;
	else
		return a + multiplica(a, b - 1);
}

//		x^y = x					Si y = 1
//		x^y = x * x^y-1			Si y > 1
int potencia(int x,int y)
{
	if(y == 1)
		return x;
	else
		return x * potencia(x, y - 1);
}

//  Fi = 1						Si i = 0 o i = 1
//  Fi = Fi-1 + Fi-2			Si i > 1
int Fibonacci(int i)
{
	if(i == 0 || i == 1)
		return 1;
	else
		return Fibonacci(i - 1) + Fibonacci(i - 2);
}

//		Pi = 4						Si i = 1
//		Pi = Pi-1 - 4 / (2i - 1)	Si i es par y i > 1

//		Pi = Pi-1 + 4 / (2i + 1)	Si i es impar y i > 1

 
int main()			
 {			
	 int valor = 5;
	printf("El factorial iterativo de 5 es %d \n", factoriali(5) );
	printf("El factorial recursivo de 5 es %d \n", factorial(valor) );
	printf("40 por 12 es %d \n", multiplica(40, 12) );
	printf("5 elevado a 3 es %d \n", potencia(5, 3) );
	printf("Fibonacci de 5 es %d \n", Fibonacci(5) );
	printf("pi a 100 términos es %f \n", pi(90) );

	pausa;
 }

float pi(int i)
{
	if(i == 1)
		return 4;
	if( (i % 2) == 0 )
		return pi(i - 1) - 4.0 / ( 2 * i - 1);
	else
		return pi(i - 1) + 4.0 / ( 2 * i - 1);
}
