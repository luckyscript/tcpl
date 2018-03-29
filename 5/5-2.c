#include <stdio.h>
int
getFloat (float *p) {
    int c;
    float power = 0;
    while(isspace(c = getch()))
    ;
    if(!isdigit(c) && c != EOF && c != '-' && c != '+') {
        ungetch(c);
        return 0;
    }
    int sign;
    sign = (c == '-')? -1: 1;
    for (*p = 0; isdigit(c) || c == '.'; c = getch()) {
        if(power) power*=10.0;
        if (c == '.') {
            power = 1.0;
        }
        *p = 10.0 * *p + (c - '0');
    }
    *p *= sign / power;
    if (c != EOF) {
        ungetch(c);
    }
    return c;
}