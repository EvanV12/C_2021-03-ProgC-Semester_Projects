#pragma once
#pragma warning(disable : 4996) // ignores the scanf issue

#include <stdio.h>

#include "func_declaration.h"
#include "func_code.h"

int lengthOfKey(char m[]) {
    int i;
    for (i = 0; m[i] != '\0'; i++);
    return i - 1;
}


int main(int argc, char* argv[]) {


    char sourceFile[300], destinationFile[300], key[20];
    


    printf("Enter command: ");
    scanf("%s %s %s %s");


    if (argc != 4) {
        line(2);
        printf("Invalid Arguements");
        line(2);
        printf("Usage: encrypt sourceFile destinationFile key");
        line(2);
    }
    else {
        // des an uparxei to arxeio argv[1] kai anoije to gia anagnosi
        if (checkIfFileExists(sourceFile)) {
            fopen(sourceFile, "r");
            destinationFile = sourceFile;

        }
        // dimiourgise to arxeio argv[2] kai anoije to gia eggrafi

        while (!eof(argv[1])) {
            // Diabase enan xaraktira apo to argv[1];
            t[i] += key[i % lengthOfKey];  // ENCRYPTION
            // Grapse enan xaraktira sto argv[2];
        }

        // REMEMBER TO CLOSE THE FILES
    }
    return 0;
}

