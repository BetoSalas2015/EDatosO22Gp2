//  Sesión 42 - 25/11/2022   -- Archivos
#include <stdio.h>		//  Para la i/o del programa
#include <stdlib.h>		//  Para system() y para los numeros aleatorios

#define pausa system("pause")
#define cls system("cls")

FILE *entrada, *salida;			//  Trabajar con archivos 

struct persona {
	char nombre[10];
	int edad;
};

int main()
{
	char cadena[80];
	struct persona entero[2] = { {"Roberto", 45}, {"Salazar", 47} };
	int i;

	entrada = fopen("Datos.dat","r");		//  Abrimos el flujo
	if(entrada == NULL)	
	{
		printf("El archivo existe.\n");
		pausa;
		return 1;					//  Error 1
	}
	//salida = fopen("Datos.dat","w");		//  Abrimos el flujo
	//if(salida == NULL)	
	//{
	//	printf("El archivo no se pudo crear.\n");
	//	pausa;
	//	return 2;					//  Error 1
	//}

	fread( entero, sizeof(struct persona), 2, entrada);
	for(i = 0; i < 2; i++)
	{
		printf("Nombre = %s, edad = %d\n", entero[i].nombre, entero[i].edad);
	}
	
	
	fclose(entrada);	
	//fclose(salida);					// Cerramos el Flujo
	pausa;
	return 0;
}
