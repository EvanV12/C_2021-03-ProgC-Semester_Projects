#include <stdio.h>

void showframe(int frame) {

    int main() {

        int fr = 0;

        do {
            :
            switch (ch) {
            case 'A':
            case 'a': if (fr > 0) fr--;
                    else fr = MAX_FRAME;
                break;
            case 'D':
            case 'd': if (fr < MAX_FRAME) fr++;
                    else fr = 0;
                break;
            }

            showframe(fr);
        }


        return 0;
    }


