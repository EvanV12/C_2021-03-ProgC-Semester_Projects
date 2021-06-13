#include <stdio.h>

int main()
{

    int students = 22, grade = 0, mainCounter = 0, passCounter = 0, failcounter = 0, gradeTotal = 0, gradeAverage = 0, error;

    do {

        do {
            printf("\nPlease enter grade for student %d: ", mainCounter + 1);
            scanf("%d", &grade);

            error = (grade < 1 || grade>20) ? 1 : 0;
            if (error) printf("\nGrade must be between 1 and 20 !!!");

        } while (error);


        mainCounter++;

        if (grade < 10) failcounter++;
        else passCounter++;


        gradeTotal = gradeTotal + grade;


    } while (mainCounter < students);

    gradeAverage = gradeTotal / mainCounter;


    printf("\n\nIn a class of %d students:\n\nThe sum of all grades is %d.\nThe class average is %d.", students, gradeTotal, gradeAverage);
    printf("\n%d students passed.\n%d students failed.", passCounter, failcounter);

    return 0;
}


