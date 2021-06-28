/*
ΝΓΠ που να δέχεται από το πληκτρολόγιο κείμενο μέγιστου μήκους 300 χαρακτήρων και να:

Α. Εκτυπώνει το string ανεστραμμένο.
Β. Να εκτυπώνει τους χαρακτήρες που βρίσκονται στις μονές θέσεις του κειμένου.

*/
#pragma warning(disable : 4996)
#include <stdio.h>

#include <time.h>
#include <stdlib.h>
#define N 10

//remove 0 from main to play

int main0603d()
{

    char name[N];
    int i, length;

    printf("Enter name: ");
    fgets(name, N, stdin);
    printf("%s", name);


    for (i = 0; name[i] != '\0'; i++) {
        length++;
        printf("%d", length);
    }



    for (i = length; i >= 0; i--) {
        printf("%c", name[i]);
    }


    return 0;
}

