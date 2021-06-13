/*
ΝΓΠ που να δέχεται από το πληκτρολόγιο κείμενο μέγιστου μήκους 300 χαρακτήρων και να:

Α. Εκτυπώνει το string ανεστραμμένο.
Β. Να εκτυπώνει τους χαρακτήρες που βρίσκονται στις μονές θέσεις του κειμένου.

*/
#include <stdio.h>
#define N 10

int main()
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




    // printf("Hello World");

    return 0;
}


