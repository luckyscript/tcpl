#include <stdio.h>
void
itob(int n, char s[], int b) {
    int sign = 1;
    int i = 0;
    if(n < 0) {
        sign = 0;
        n = -n;
    }
    do {
        int c = (n%b)<10?n%b+'0':(n%b) + 'a';
        // int c = 1;
        s[i] = c;
        i++;
    } while((n /= b) > 0);

    s[i] = '\0';
}

int
main(void) {
    char s[10];
    itob(100, s, 10);
    printf("%s", s);
    return 0;
}