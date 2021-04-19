/*
 * library.h
 *
 *  Created on: 21 abr. 2020
 *      Author: reychy
 */

#ifndef LIBRARY_H_
#define LIBRARY_H_

struct registry{
	char name[40];
	char address[40];
	long phoneNumber;
};

#endif /* LIBRARY_H_ */

int existsFile(char *fileName);
void createFile(char *fileName);
