/*
ΝΓΠ που να δέχεται από το πληκτρολόγιο τους βαθμούς 15 μαθητών και να τους αποθηκεύει στον πίνακα max.
(Ο χρήστης να είναι υποχρεωμένος να δώσει βαθμούς από το 1 έως το 20)

Αφού ολοκληρωθεί η καταχώρηση, το πρόγραμμα να εκτυπώνει τους βαθμούς όλης της τάξης
μαζί με την ένδειξη αν πέρασε ή κόπηκε δίπλα στο θαθμό του κάθε μαθητή.
(Περνάει ο μαθητής που έχει βαθμό >=10)

Τέλος, το πρόγραμμα θα δείχνει το μέσο όρο της τάξης, καθώς και πόσοι μαθητές πέρασαν και πόσοι κόπηκαν.
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


