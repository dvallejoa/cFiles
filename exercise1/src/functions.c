#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void guardadoArchivo(char *almacenCaracteres){
	FILE *archivo;
	archivo = fopen("/home/dvallejo/Desktop/testing/testing.txt","a");
	if (archivo == 0) {
		perror("Error: ");
		exit(0);}
	else{
		fprintf(archivo,"%s", almacenCaracteres);
	}
	fclose(archivo);
}
