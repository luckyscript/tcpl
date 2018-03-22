#include <stdio.h>

void removeComment(int c);
int status;
int isStr;

int
main(void) {
    int c;
    while((c = getchar()) != EOF) {
        removeComment(c);
    }
    return 0;
}


void
removeComment(int c) {
    int d;
    if (c == '"') {
        isStr = !isStr;
    }
    if(!isStr) {
        if(c == '/') {
            d = getchar();
            if (d == '/') {
                status = 1;
            } else if (d == '*') {
                status = 2;
            }
        } else if(status == 0) {
            putchar(c);
        } else if(status == 1 && c == '\n') {
            status = 0;
        } else if (c == '*') {
            d = getchar();
            if (d == '/') {
                status = 0;
            }
        }
    } else {
        putchar(c);
    }
}