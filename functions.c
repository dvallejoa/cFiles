/*
 * functions.c
 *
 *  Created on: 21 abr. 2020
 *      Author: reychy
 */
#include <stdio.h>
#include <stdlib.h>
#include "library.h"

int existsFile(char *fileName){
	FILE *pf = NULL;
	int exists = 0;

	if((pf = fopen(fileName,"r"))!=NULL){
		exists = 1;
		fclose(pf);
	}

	return exists;
}
void createFile(char *fileName){
	FILE *pf = NULL;
	struct registry reg;
	char ans;

	if((pf=fopen(fileName,"w"))==NULL){
		perror("Error: ");
		exit(1);
	}

	do{
		printf("Nom: \n");
		fflush(stdout);
		gets(reg.name);
		printf("Adreça: \n");
		fflush(stdout);
		gets(reg.address);
		printf("Telèfon: \n");
		fflush(stdout);
		scanf("%ld", &reg.phoneNumber);
		fflush(stdin);
		fprintf(pf,"%s %s %ld \n", reg.name, reg.address, reg.phoneNumber);
		if(ferror(pf)){
			perror("Error: ");
			exit(2);
		}

		printf("Vols afegir un altre registre? (y/n): \n");
		fflush(stdout);
		ans = getchar();
		fflush(stdin);

	} while (ans == 'y');
}
