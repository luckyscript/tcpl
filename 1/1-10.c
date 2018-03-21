#include <stdio.h>
int
main() {
    int c;
    while((c = getchar()) != EOF) {
        switch(c) {
            case '\t':
                putchar('\t');
                break;
            case '\b':
                putchar('\b');
                break;
            case '\\':
                putchar('\\');
                break;
            default:
                putchar(c);
        }
    }
    return 0;
}