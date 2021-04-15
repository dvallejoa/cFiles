#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void menu(){
	printf("Bienvenido al menú de ficheros\n\n");
	printf("[1]	Crear un fichero\n");
	printf("[2]	Mostrar el contenido de un fichero\n");
	printf("[3]	Modificar el contenido de un fichero\n");
	printf("[4]	Salir\n");
}

void switchMenu(int seleccionMenu){

	switch(seleccionMenu) {
		case 1: crearFichero();
			break;
		case 2: leerFichero();
			break;
		case 3:
			break;
		case 4: printf("Has salido del programa correctamente");
			break; }
}

void crearFichero(){
	FILE *archivo;
	char escribirNombre[20];
	printf("Escribe el nombre del archivo a crear: ");
	scanf("%s", escribirNombre);
	archivo = fopen(escribirNombre,"w");
}

void leerFichero(){
	char leerNombre[20];
	printf("Escribe el nombre del archivo a crear: ");
	scanf("%s", leerNombre);
	FILE *archivo;
	archivo = fopen(leerNombre,"r");
	if (archivo == NULL) {
		printf("Error: No se ha podido leer el archivo");
	}
	else {
		char caracter;
		while(feof(archivo) == 0){
			caracter = fgetc(archivo);
			printf("%c", caracter);
		}
		fclose(archivo);
	}
}
