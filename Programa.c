//  Sesión 9 - 03/09/2022
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
	int costo = 60;			//  Declaro una variable de tipo int          llamada costo
	struct datos Agenda;	//  Decalro una variable de tipo struct datos llamada Agenda

	Agenda.edad = 25;
	Agenda.sexo = 'H';
	strcpy(Agenda.NOMBRE.nombre, "Roberto");
	strcpy(Agenda.NOMBRE.apellido, "Salazar");
	strcpy(Agenda.direccion, "2 sur 2");

	printf("Nombre: %s %s, \nEdad: %d, \nSexo: %c, \nDireccion: %s\n\n", Agenda.NOMBRE.nombre, Agenda.NOMBRE.apellido, Agenda.edad, Agenda.sexo, Agenda.direccion);

	printf("Dame la edad: ");
	scanf("%d", &Agenda.edad);
	fflush(stdin);					//  Vaciar el flujo (stream) de teclado
	printf("Dame el sexo: ");
	scanf("%c", &Agenda.sexo);
	fflush(stdin);
	printf("Dame el nombre: ");
	gets(Agenda.NOMBRE.nombre);
	printf("Dame el apellido: ");
	gets(Agenda.NOMBRE.apellido);
	printf("Dame la dirección: ");
	gets(Agenda.direccion);

	printf("Nombre: %s %s, \nEdad: %d, \nSexo: %c, \nDireccion: %s\n\n", Agenda.NOMBRE.nombre, Agenda.NOMBRE.apellido, Agenda.edad, Agenda.sexo, Agenda.direccion);

	printf("El char ocupa %d bytes en memoria. \n", sizeof( char ) );  
	printf("El int ocupa %d bytes en memoria. \n", sizeof( int ) ); 
	printf("El float ocupa %d bytes en memoria. \n", sizeof( float ) ); 
	printf("El double ocupa %d bytes en memoria. \n", sizeof( double ) ); 
	printf("El struct datos ocupa %d bytes en memoria. \n", sizeof( struct datos ) ); 

	pausa;
	return 0;
}