#include <stdio.h>
// #define SIZE 5  //����� ��� �� ��������� �� ������� ��� ������, ���� ��� ������ 5 ��, 
// ����� ��������� �� ��� ������ ��� �� ������� � ������ ���� ��� ������

int main()
{
    int i;
    int marks[5]; //������� 5 ��������

    for (i = 0; i < 5; i++) {
        printf("Dose vathmo gia ton spoudasti %d", i);
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("O spoudastis %d exei vathmo %d\n", i, marks[i]);
    }

    return 0;
}



