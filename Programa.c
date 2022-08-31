#include <stdio.h>		//  Para la i/o del programa
#include <stdlib.h>		//  Para system()
#include <string.h>		//  Para usar srtcpy()

#define pausa system("pause")

struct datos				// Defino la estructura (struct) datos
	{ 	
		char nombre[30];	//  Defino los campos de la estructura persona (variables)
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
	strcpy(Agenda.nombre, "Roberto Salazar");
	strcpy(Agenda.direccion, "2 sur 2");

	printf("Nombre: %s, \nEdad: %d, \nSexo: %c, \nDireccion: %s\n\n", Agenda.nombre, Agenda.edad, Agenda.sexo, Agenda.direccion);

	printf("Dame la edad: ");
	scanf("%d", &Agenda.edad);
	fflush(stdin);					//  Vaciar el flujo (stream) de teclado
	printf("Dame el sexo: ");
	scanf("%c", &Agenda.sexo);
	fflush(stdin);
	printf("Dame el nombre: ");
	gets(Agenda.nombre);
	printf("Dame la dirección: ");
	gets(Agenda.direccion);

	printf("Nombre: %s, \nEdad: %d, \nSexo: %c, \nDireccion: %s\n", Agenda.nombre, Agenda.edad, Agenda.sexo, Agenda.direccion);

	pausa;
	return 0;
}