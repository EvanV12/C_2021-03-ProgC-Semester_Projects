
#pragma warning(disable : 4996)
#include <stdio.h>

#include <time.h>
#include <stdlib.h>
#define SIZE 5

//remove 0 from main to play

int main0603b()
{
    int board[SIZE][SIZE];
    int i, j, sum, plithos;

    srand(time(NULL));
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            board[i][j] = (rand() % 100) + 1;
        }
    }


    sum = 0;

    // NUMBER 1
    printf("Question 1\n");
    sum = 0;
    plithos = 0;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%5d", board[i][j]);
            sum += board[i][j];
        }
        printf("\n");
    }
    printf("\n\nSum is %d\n", sum);
    printf("Average is %.2f\n\n\n", (float)sum / plithos);



    // NUMBER 2
    printf("Question 2\n");
    sum = 0;
    plithos = 0;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (i == j) printf("%5d", board[i][j]);
            else printf("%5c", ' ');
            sum += board[i][j];
        }
        printf("\n");
    }
    printf("\n\nSum is %d\n", sum);
    printf("Average is %.2f\n\n\n", (float)sum / plithos);



    // NUMBER 3
    printf("Question 3\n");
    sum = 0;
    plithos = 0;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (i < j) printf("%5d", board[i][j]);
            else printf("     ");
            sum += board[i][j];
        }
        printf("\n");
    }
    printf("\n\nSum is %d\n", sum);
    printf("Average is %.2f\n\n\n", (float)sum / plithos);




    // NUMBER 4
    printf("Question 4\n");
    sum = 0;
    plithos = 0;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {

            if (i + j == SIZE - 1) printf("%5d", board[i][j]);
            else printf("     ");
            sum += board[i][j];
        }
        printf("\n");
    }
    printf("\n\nSum is %d\n", sum);
    printf("Average is %.2f\n\n\n", (float)sum / plithos);



    // NUMBER 5
    printf("Question 5\n");
    sum = 0;
    plithos = 0;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {

            if (i + j > SIZE - 1) printf("%5d", board[i][j]);
            else printf("     ");
            sum += board[i][j];
        }
        printf("\n");
    }
    printf("\n\nSum is %d\n", sum);
    printf("Average is %.2f\n\n\n", (float)sum / plithos);




    // NUMBER 6
    printf("Question 6\n");
    sum = 0;
    plithos = 0;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {

            if (i + j > SIZE - 1 || i < j) printf("%5d", board[i][j]);
            else printf("     ");
            sum += board[i][j];
        }
        printf("\n");
    }
    printf("\n\nSum is %d\n", sum);
    printf("Average is %.2f\n\n\n", (float)sum / plithos);




    // NUMBER 7
    printf("Question 7\n");
    sum = 0;
    plithos = 0;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {

            if (i + j > SIZE - 1 && i < j) printf("%5d", board[i][j]);
            else printf("     ");
            sum += board[i][j];
        }
        printf("\n");
    }
    printf("\n\nSum is %d\n", sum);
    printf("Average is %.2f\n\n\n", (float)sum / plithos);




    // NUMBER 8
    printf("Question 8\n");
    sum = 0;
    plithos = 0;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {

            if (i == 1) printf("%5d", board[i][j]);
            else printf("     ");
            sum += board[i][j];
        }
        printf("\n");
    }
    printf("\n\nSum is %d\n", sum);
    printf("Average is %.2f\n\n\n", (float)sum / plithos);



    // NUMBER 9
    printf("Question 9\n");
    sum = 0;
    plithos = 0;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {

            if ((i % 2) == 1) printf("%5d", board[i][j]);
            else printf("     ");
            sum += board[i][j];
        }
        printf("\n");
    }
    printf("\n\nSum is %d\n", sum);
    printf("Average is %.2f\n\n\n", (float)sum / plithos);



    // NUMBER 10
    printf("Question 10\n");
    sum = 0;
    plithos = 0;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {

            if ((i % 2) == 1 && (j % 2) == 0) printf("%5d", board[i][j]);
            else printf("     ");
            sum += board[i][j];
        }
        printf("\n");
    }
    printf("\n\nSum is %d\n", sum);
    printf("Average is %.2f\n\n\n", (float)sum / plithos);



    // NUMBER 11
    printf("Question 11\n");
    sum = 0;
    plithos = 0;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {

            if (((i + j) % 2) == 1) printf("%5d", board[i][j]);
            else printf("     ");
            sum += board[i][j];
        }
        printf("\n");
    }
    printf("\n\nSum is %d\n", sum);
    printf("Average is %.2f\n\n\n", (float)sum / plithos);



    // NUMBER 12
    printf("Question 12\n");
    sum = 0;
    plithos = 0;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {

            if (j == (SIZE / 2)) printf("%5d", board[i][j]);
            else printf("     ");
            sum += board[i][j];
        }
        printf("\n");
    }
    printf("\n\nSum is %d\n", sum);
    printf("Average is %.2f\n\n\n", (float)sum / plithos);


    // NUMBER 13
    printf("Question 13\n");
    sum = 0;
    plithos = 0;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {

            if (j == (SIZE / 2) || i == (SIZE / 2)) printf("%5d", board[i][j]);
            else printf("     ");
            sum += board[i][j];
        }
        printf("\n");
    }
    printf("\n\nSum is %d\n", sum);
    printf("Average is %.2f\n\n\n", (float)sum / plithos);



    // NUMBER 14
    printf("Question 14\n");
    sum = 0;
    plithos = 0;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {

            if (i == j || (i + j) == (SIZE - 1)) printf("%5d", board[i][j]);
            else printf("     ");
            sum += board[i][j];
        }
        printf("\n");
    }
    printf("\n\nSum is %d\n", sum);
    printf("Average is %.2f\n\n\n", (float)sum / plithos);




    return 0;
}

