#include <stdio.h>
// #define SIZE 5  //είναι για να δηλώσουμε τη σταθερά του πίνακα, αντί για αριθμό 5 πχ, 
// οπότε αλλαζουμε σε ένα σημείο εδώ αν αλλάξει η αρχική τιμή του πίνακα

int main()
{
    int i;
    int marks[5]; //Πίνακας 5 ακεραίων

    for (i = 0; i < 5; i++) {
        printf("Dose vathmo gia ton spoudasti %d", i);
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("O spoudastis %d exei vathmo %d\n", i, marks[i]);
    }

    return 0;
}



