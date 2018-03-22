#include <stdio.h>
int
main(void) {
    int c, prevc;
    while((c = getchar()) != EOF) {
        if(c == ' ' && prevc != ' ') {
            putchar('\n');
        } else {
            putchar(c);
        }
        prevc = c;
    }
    return 0;
}