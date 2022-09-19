//  Sesión 15 - 19/09/2022   -- Funciones 
#include <stdio.h>		//  Para la i/o del programa
#include <stdlib.h>		//  Para system()

#define pausa system("pause")		

// Decclaración de función
//  Encabezado		qué tipo regresa - nombre - (qué necesita)
//  Cuerpo ( { Bloque de código })

int square(int num)
{
	return num * num;
}
int var;		//  varaible externa
void imprimeLinea(int valor)
{
	static int lin = 1;
	printf("Linea %d: El valor es %d. \n", lin++, valor);
	var = 0;
}


 
int main()			//  Encabezado
 {					//  Cuerpo
	
	
	//int resultado, dato;
	// printf("DAme un numero: ");
	//scanf("%d", &dato);
	//resultado = square(dato);		// Invocación de función 
	//printf("El resultado es: %d \n", resultado);
	//
	// //  Para C:
	// //  Lo unico que es falso es el 0
	// //  ... Todo lo demás es verdadero ( tradicionalmente el 1)
	// var = 1;	//  Verdadero
	// if( square(5) )
	//	 printf("Esto es verdadro\n" );
	// else
	//	 printf("Esto es falso\n");
	//pausa;

	//if( var )
	//	 return 1;		// regresamos verdadero
	// else
	//	 return 0;		// regresamos falso

	 /*int i;
	 for( i = 1; i <= 10; i++)
		 imprimeLinea(i);*/

	 {
	int x = 1;
        printf("%d\n",x);
	{
	    int x = 2;
	    printf("%d\n",x);
	    {
		x += 1;
		 printf("%d\n",x);
	    }
	    printf("%d\n",x);
	}
	printf("%d",x);
	pausa;
}



	pausa;
 }