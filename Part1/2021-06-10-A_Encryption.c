#pragma once
#pragma warning(disable:4996)

#include <stdio.h>
// prof
int main0610a()
{

    char t[300];
    int i, key;

    printf("Enter text: ");
    fgets(t, 300, stdin);

    printf("Give Encryption key: ");
    scanf("%d", &key);
    for (i = 0; t[i] != '\0'; i++) {
        t[i] += key;
    }

    printf("Encrypted text is :%s\n", t);

    printf("Give Decryption key: ");
    scanf("%d", &key);
    for (i = 0; t[i] != '\0'; i++) {
        t[i] -= key;
    }

    printf("Decrypted text is :%s\n", t);


    return 0;


}

