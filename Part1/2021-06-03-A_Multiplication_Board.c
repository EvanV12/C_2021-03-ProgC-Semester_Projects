#pragma warning(disable : 4996)
#include <stdio.h>

//remove 0 from main to play


int main0603a()
{
    int prop[10][10];
    int i, j, sum;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            prop[i][j] = (i + 1) * (j + 1);
        }
    }


    sum = 0;

    printf("Multiplication board:\n\n");


    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%5d", prop[i][j]);
            sum += prop[i][j];
        }
        printf("\n");
    }


    printf("\n\nSum is %d\n", sum);
    printf("Average is %.2f", (float)sum / 100);


    return 0;
}

