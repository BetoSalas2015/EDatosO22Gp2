//  Sesión 23 - 07/10/2022   -- Ordenamientos y búsquedas
#include <stdio.h>		//  Para la i/o del programa
#include <stdlib.h>		//  Para system()
#include <string.h>		//  Para el manejo de cadenas

#define pausa system("pause")
#define cls system("cls")
#define SIZE 80

int main()
{
	int costo = 60;			//  Declaro una variable entera llamada costo
	int i, cont;
	char cadena[SIZE];		//  Declaro una cadena
	printf("Dame una cadena: ");
	gets(cadena);
	
	i = 0; cont = 1;
	while(cadena[i] != '\0')
	{
		printf("Cadena[%d] = '%c' \n", i, cadena[i]);
		
		if( cadena[i] >= 'a' && cadena[i] <= 122 )
			cadena[i] = cadena[i] - 32;
		i++; 
	}
	printf("La cadena tiene %d caracteres alfabeticos.\n", cont);
	printf("%s\n", cadena);
	pausa;
	return 0;
}