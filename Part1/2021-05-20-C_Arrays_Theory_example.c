#pragma warning(disable : 4996)
#include <stdio.h>

//remove 0 from main to play
// 
// #define SIZE 5  //����� ��� �� ��������� �� ������� ��� ������, ���� ��� ������ 5 ��, 
// ����� ��������� �� ��� ������ ��� �� ������� � ������ ���� ��� ������


int mai0520cn()
{
    int i;
    int marks[5]; //������� 5 ��������

    for (i = 0; i < 5; i++) {
        printf("Dose vathmo gia ton spoudasti %d: ", i);
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("O spoudastis %d exei vathmo %d\n", i, marks[i]);
    }

    return 0;
}

