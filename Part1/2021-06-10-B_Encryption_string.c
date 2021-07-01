#pragma once
#pragma warning(disable:4996)

#include <stdio.h>
// prof
int strLength(char m[]) {
    int i;
    for (i = 0; m[i] != '\0'; i++);
    return i - 1;
}

int main() {
    char t[300], key[20];
    int  i, len;

    printf("Give text: ");
    fgets(t, 300, stdin);

    printf("Give Encryption key: ");
    fgets(key, 20, stdin);

    len = strLength(key);
    printf("The length of key: %d\n", len);
    for (i = 0; t[i] != '\0'; i++) {
        t[i] += key[i++ % len];
    }
    printf("Encrypted Text: %s\n", t);

    printf("Give Decryption key: ");
    fgets(key, 20, stdin);

    len = strLength(key);
    printf("The length of key: %d\n", len);
    for (i = 0; t[i] != '\0'; i++) {
        t[i] -= key[i++ % len];
    }
    printf("Decrypted Text: %s\n", t);

    return 0;
}
