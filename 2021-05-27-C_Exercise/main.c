/*
��� ��� �� ������� ��� �� ������������ ���� ������� 15 ������� ��� �� ���� ���������� ���� ������ max.
(� ������� �� ����� ������������ �� ����� ������� ��� �� 1 ��� �� 20)

���� ����������� � ����������, �� ��������� �� ��������� ���� ������� ���� ��� �����
���� �� ��� ������� �� ������ � ������ ����� ��� ����� ��� ���� ������.
(������� � ������� ��� ���� ����� >=10)

�����, �� ��������� �� ������� �� ���� ��� ��� �����, ����� ��� ����� ������� ������� ��� ����� �������.
*/

#include <stdio.h>

int main()
{
    int max[15], i, sum, error;
    float avg = 0;
    // char ch [7];
    int pass;

    for (i = 0; i < 15; i++) {

        do {
            printf("Enter integer No%d: ", i + 1);
            scanf("%d", &max[i]);
            error = (i < 1 || i>20);
        } while (error);
        if (error) printf("Grades must be from 1 to 20 !!!");

    }


    printf("\nThe numbers are: ");

    sum = 0;
    for (i = 0; i < 10; i++) {
        // if (i>=10) ch[]="PASSED";
        if (i >= 10) pass = 1;
        // else ch[]="FAILED";
        else pass = 0;
        printf("\n No%d is %d - %d", i + 1, max[i], pass);
        sum += max[i];
    }

    avg = (float)sum / i;

    printf("\n\n\nTheir sum is %d.", sum);
    printf("\n\nTheir average is %.2f.", avg);
    // printf("\n\nTheir average is %.2f.", (float)sum/10);     // by prof

    return 0;
}


