/*
��� ��� �� ������� 10 ��������� �������� ��� �� ������������ ��� �� ���� �������� �� ���� ������ ����������� ������
��� ��������, �� ��������� �� ��� ��������� ���� �������� ������, ����� ��� �� �������� ��� �� ���� ��� ����.
*/

#include <stdio.h>

int main()
{
    int a[10], i, sum;
    float avg = 0;

    for (i = 0; i < 10; i++) {
        printf("Enter integer No%d: ", i + 1);
        scanf("%d", &a[i]);
        // scanf("%d", &a+i); // note by prof, it's the same
    }


    printf("\nThe numbers are: ");

    sum = 0;
    for (i = 0; i < 10; i++) {
        printf("\n No%d is %d", i + 1, a[i]);
        sum += a[i];
    }

    avg = (float)sum / i;

    printf("\n\n\nTheir sum is %d.", sum);
    printf("\n\nTheir average is %.2f.", avg);
    // printf("\n\nTheir average is %.2f.", (float)sum/10);     // by prof

    return 0;
}


