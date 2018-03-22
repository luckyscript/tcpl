// detab

#include <stdio.h>
int
main() {
    int c;
    while((c = getchar()) != EOF) {
        if(c == '\t') {
            for(int i = 0; i < 4;i ++) {
                putchar(' ');
            }
        } else {
            putchar(c);
        }
    }
    return 0;
}