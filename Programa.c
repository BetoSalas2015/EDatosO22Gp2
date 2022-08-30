#include <stdio.h>		//  Para la i/o del programa
#include <stdlib.h>		//  Para system()

#define pausa system("pause")

struct persona 
{ 	
	char nombre[30]; 
	int edad;	
	char sexo; 	
	char direcccion[30];
};

int main()
{
	
	pausa;
	return 0;
}