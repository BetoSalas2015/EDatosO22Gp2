//  Sesión 40 - 18/11/2022   -- Archivos
#include <stdio.h>		//  Para la i/o del programa
#include <stdlib.h>		//  Para system() y para los numeros aleatorios

#define pausa system("pause")
#define cls syste 
FILE *archivo;			//  Trabajar con archivos 

int main()
{

	archivo = fopen("Archivo de texto.txt","w");		//  Abrimos el flujo
	printf("Saludos Programas!!!!!\n");
	fprintf(archivo, "Saludos Programas!!!!!\n");
	fclose(archivo);									// Cerramos el Flujo

	pausa;
	return 0;
}
