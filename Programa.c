//  Sesión 43 - 28/11/2022 - pila
#include <stdio.h>		//  Para la i/o del programa
#include <stdlib.h>		//  Para system() y para los numeros aleatorios.

#define pausa system("pause")
#define cls system("cls")
#define SIZE 15 

char pila[SIZE];
char *tope = pila;

void push(char dato) 
{
	if( tope < (tope + SIZE) )
	{
		*tope = dato;
		tope++;
	}
	else
	{
		printf("Overflow: no se pueden guardar mas datos.\n");
		pausa;
		return;
	}
}

char pop()
{
	if(tope > pila )
	{
		char dato;
		tope--;
		dato = *tope;
		*tope = '\0';
		return dato;
	}
	else
	{
		printf("Underflow: la pila está vacía.\n");
		pausa;
		return '\0';			//  regreso 0 o nulo
	}
}

int isEmpty()
{
	if( tope != pila)
		return 1;			//  regresamos true (1)
	else
		return 0;			//  Regresamos falso (0)
}


int main()
{
	push('R');
	push('o');
	push('b');
	push('e');
	push('r');
	push('t');
	push('o');

	puts(pila);

	printf("Salio: %c\n", pop() );
	printf("Salio: %c\n", pop() );
	printf("Salio: %c\n", pop() );

	puts(pila);


	pausa;
	return 0;
}
