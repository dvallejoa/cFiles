#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void main(){
	char almacenCaracteres[100];
	printf("Introduce un texto (no más de 100 carácteres):\n");
	scanf("%s",almacenCaracteres);
	guardadoArchivo(almacenCaracteres);
}

