/*
 * main.c
 *
 *  Created on: 14 abr. 2020
 *      Author: reychy
 */

#include <stdio.h>
#include "library.h"

void main(){
	char fileName[30];
	char ans = 'y';
	puts("Indica el nom del fitxer:");
	fflush(stdout);
	gets(fileName);
	if(existsFile(fileName)){
		printf("El fitxer ja existeix, vols sobreescriure'l? (y/n):\n");
		fflush(stdout);
		ans = getchar();
		fflush(stdin);
	}

	if(ans=='y'){
		createFile(fileName);
	}
}
