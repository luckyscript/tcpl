#include <stdio.h>
#include <stdlib.h>
void escape(char *s, char *t) {
    int i = 0;
    while(s[i] != '\0') {
        switch(s[i]) {
            case '\t':
                t[i] = 't';
                break;
            case '\n':
                t[i] = 'n';
                break;
            default:
                t[i] = s[i];
        }
        i++;
    }
    t[i] = '\0';
}

int main() {
    char *s = "test";
    char *t = malloc(sizeof(s));
    escape(s, t);
    printf("%s", t);
    return 0;
}