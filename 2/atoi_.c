#include <stdio.h>
int
atoi(char s[]) {
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9' && s[i] != '\0'; i++) {
        printf("%c\n", s[i]);
        n = n*10 + (s[i] - '0');
        // printf("%d",n);
    }
    return n;
}

int
main(void) {
    int s[3] = {'1', '2'};
    int c = atoi("123");
    printf("%d\n",c);
}