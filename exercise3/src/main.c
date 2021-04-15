#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void main(){
	int seleccionMenu;
	menu();
	printf("Selecciona que opción quieres realizar: ");
	scanf("%d", &seleccionMenu);
	switchMenu(seleccionMenu);
}

