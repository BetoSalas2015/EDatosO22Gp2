//  Sesión 40 - 18/11/2022   -- Archivos
#include <stdio.h>		//  Para la i/o del programa
#include <stdlib.h>		//  Para system() y para los numeros aleatorios

#define pausa system("pause")
#define cls system("cls")

FILE *entrada, *salida;			//  Trabajar con archivos 

int main()
{
	char cadena[80];
	entrada = fopen("Programa.c","r");		//  Abrimos el flujo
	if(entrada == NULL)	
	{
		printf("El archivo existe.\n");
		pausa;
		return 1;					//  Error 1
	}
	salida = fopen("Copia de Programa.c","w");		//  Abrimos el flujo
	if(salida == NULL)	
	{
		printf("El archivo no se pudo crear.\n");
		pausa;
		return 2;					//  Error 1
	}
	while( !feof(entrada) ) 
	{
		fgets(cadena,80,entrada);
		fprintf(salida,cadena);
		printf(cadena);
	}
	fclose(entrada);	
	fclose(salida);					// Cerramos el Flujo
	pausa;
	return 0;
}
}
