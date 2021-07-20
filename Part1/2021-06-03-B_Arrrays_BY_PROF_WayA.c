#pragma warning(disable : 4996)
#include <stdio.h>

#include <time.h>
#include <stdlib.h>
#define SIZE 5

//remove 0 from main to play


int main0603bb()
{
    int pin[SIZE][SIZE];
    int i, j, sum, plithos;


    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {


            do {
                printf("Enter value for element %d%d:", i + 1, j + 1);
                scanf("%d", &pin[i][j]);
            } while (pin[i][j] < 1 || pin[i][j]>100);



        }
    }

    return 0;
}

