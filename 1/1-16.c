#include <stdio.h>

int getline_(char s[], int lim);

#define MAX_SIZE 100

int
main() {
    char line[MAX_SIZE];
    while(getline_(line, MAX_SIZE) > 0) {
        printf("%s", line);
    }
}

int 
getline_(char s[], int lim) {
    int c, i;
    for(i = 0; i != lim && (c = getchar()) != EOF && c != '\n'; i++) {
        s[i] = c;
    }
    if(c == '\n') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

void
copy_(char from[], char to[], int size) {
    int i = 0;
    while(from[size] != '\n') {
         to[i] = from[i];
         i++;
    }
}