#pragma warning(disable : 4996)
#include <stdio.h>

//correct main to play


int main34A() {

	int a, b;

	printf("Enter number a: ");
	scanf("%d", &a);
	printf("Enter number b: ");
	scanf("%d", &b);

	if (a > b) {
		printf("Higher number is a.");
	}
	else if (a < b) {
		printf("Higher number is b.");
	}
	else {
		printf("The numbers are equal.");
	}

	// WRONG
	// else if (a=b){
	//     printf("?? ??????? ????? ????.");
	// }

	return 0;
}

