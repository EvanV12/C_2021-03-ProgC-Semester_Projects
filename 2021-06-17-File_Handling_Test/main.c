//W:\6. Programming\C

#pragma once
#pragma warning(disable : 4996) // ignores the scanf issue

#include <stdio.h>
#include <stdlib.h>

int main() {

	int num=0;
	FILE *fptr;
	
	// specify file location
	fptr = fopen("W:\\6. Programming\\C\\example.txt", "r");

	if (fptr == NULL) {
		printf("\nFile does not exist.");

	}
	else printf("\nFile exists.");

	printf("\nEnter num: ");
	scanf("%d", &num);

	fprintf(fptr, "%d", num);
	fclose(fptr);

	

	return 0;

}