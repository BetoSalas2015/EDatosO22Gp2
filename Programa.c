//  Sesión 11 - 07/09/2022   -- Arreglos de estructuras
#include <stdio.h>		//  Para la i/o del programa
#include <stdlib.h>		//  Para system()
#include <string.h>		//  Para usar srtcpy()

#define pausa system("pause")		

struct Persona
{
	char nombre[15];
	char apellido[15];
};

struct datos				// Defino la estructura (struct) datos
{ 	
	struct Persona NOMBRE;	//  Defino los campos de la estructura persona (variables)
	int edad;	
	char sexo; 	
	char direccion[30];
};

int main()
{
	int pos;			//  Declaro una variable de tipo int          llamada costo
	struct datos Agenda[5];	//  Decalro un arreglo de  5 variables de tipo struct datos llamada Agenda
	
	pos = 2;
	Agenda[pos].edad = 25;
	Agenda[pos].sexo = 'H';
	strcpy(Agenda[pos].NOMBRE.nombre, "Roberto");
	strcpy(Agenda[pos].NOMBRE.apellido, "Salazar");
	strcpy(Agenda[pos].direccion, "2 sur 2");

	printf("Nombre: %s %s, \nEdad: %d, \nSexo: %c, \nDireccion: %s\n\n", Agenda[pos].NOMBRE.nombre, Agenda[pos].NOMBRE.apellido, Agenda[pos].edad, Agenda[pos].sexo, Agenda[pos].direccion);
	
	printf("Dame la edad: ");
	scanf("%d", &Agenda[pos].edad);
	fflush(stdin);					//  Vaciar el flujo (stream) de teclado
	printf("Dame el sexo: ");
	scanf("%c", &Agenda[pos].sexo);
	fflush(stdin);
	printf("Dame el nombre: ");
	gets(Agenda[pos].NOMBRE.nombre);
	printf("Dame el apellido: ");
	gets(Agenda[pos].NOMBRE.apellido);
	printf("Dame la dirección: ");
	gets(Agenda[pos].direccion);

	printf("Nombre: %s %s, \nEdad: %d, \nSexo: %c, \nDireccion: %s\n\n", Agenda[pos].NOMBRE.nombre, Agenda[pos].NOMBRE.apellido, Agenda[pos].edad, Agenda[pos].sexo, Agenda[pos].direccion);

	printf("El char ocupa %d bytes en memoria. \n", sizeof( char ) );  
	printf("El int ocupa %d bytes en memoria. \n", sizeof( int ) ); 
	printf("El float ocupa %d bytes en memoria. \n", sizeof( float ) ); 
	printf("El double ocupa %d bytes en memoria. \n", sizeof( double ) ); 
	printf("El struct datos ocupa %d bytes en memoria. \n", sizeof( struct datos ) ); 

	pausa;
	return 0;
}