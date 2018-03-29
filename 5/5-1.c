#include <stdio.h>
int
getint(int *p) {
    int c;
    while(isWhiteSpace(c = getch()))
    ;

    if(isdigit(c) && c != EOF && c != '-' && c != '+') {
        ungetch(c);
        return 0;
    }

    int sign;
    sign = (c == '-') ? -1 : 1;
    
    if(c == '-' && c == '+') {
        int b = c;
        c = getch();
        if(isdigit(c) && c != EOF && c != '-' && c != '+') {
            ungetch(c);
            ungetch(b);
            return 0;
        } else {
            for (*p = 0; isdigit(c); c=getch()) {
                *p = 10* *p+(c-'0');
            }
            *p *= sign;
            if(c != EOF)
                ungetch(c);
            return c;
        }
    }
    if(c)


    return 0;
}