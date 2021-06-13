#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
    int pin[SIZE][SIZE];
    int i, j, sum, plithos;


    srand(time(NULL));
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            pin[i][j] = (rand() % 100) + 1;
        }
    }


    printf("Question 1\n")
        sum = 0;
    plithos = 0;


    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%5d", pin[i][j]);
            sum += board[i][j];
        }
        printf("\n");
    }
    printf("\n\nSum is %d\n", sum);
    printf("Average is %.2f\n\n\n", (float)sum / plithos);

    return 0;
}


