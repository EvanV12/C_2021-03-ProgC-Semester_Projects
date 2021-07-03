#include <stdio.h>
//me don't know if correct
int main0610bi()
{

    char t[300];
    char k[20];
    int i, j, length, error;

    printf("Enter text: ");
    fgets(t, 300, stdin);

    do {
        printf("Give Encryption key: ");
        fgets(k, 20, stdin);

        for (i = 0; k[i] != '\0'; i++) {
            length += i;
        }
        error = (length < 4) ? 1 : 0;
        if (error) printf("\nKey must be over 4 characters\n");
    } while (error);


    for (i = 0; t[i] != '\0'; i++) {
        for (j = 0; k[j] != '\0'; j++) {
            t[i] += k[j];
        }
    }
    printf("Encrypted text is :%s\n", t);


    printf("Give Decryption key: ");
    fgets(k, 20, stdin);

    for (i = 0; t[i] != '\0'; i++) {
        for (j = 0; k[j] != '\0'; j++) {
            t[i] -= k[j];
        }
    }

    printf("Decrypted text is :%s\n", t);

    return 0;

}

