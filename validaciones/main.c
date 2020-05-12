#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validaciones.h"

/*
int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);
int myGets(char* cadena, int longitud);
int getInt(int* pResultado);
int esNumerica(char* cadena, int limite);
*/







int main()
{
    int numero;

    utn_getNumero(&numero,"Ingrese un numero entero\n","Hubo un error, ingrese un numero entero dentro de los parametros \n", 0, 10, 5);
    printf("\n%d\n",numero);



    return 0;
}








