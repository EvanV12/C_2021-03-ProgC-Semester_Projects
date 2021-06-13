#include <stdio.h>

int main()
{

    // by prof

    int n, i, j, sum = 0;

    printf("Please enter integer: ");
    scanf("%d", &n);
    printf("\n");

    for (i = 1; i <= n; i++)
        for (j = 1; j <= i; j++) {
            sum += j;
            // printf("%5d %5d\n", i, j); // to see the loops
        }
    printf("\nSum = %d\n", sum);

    return 0;
}


