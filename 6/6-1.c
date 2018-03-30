#include <stdio.h>
#include <ctype.h>

int getword(char *word, int limit) {
    int c;
    while(isspace(c = getch()))
    ;
    if(isalpha(c) || c == '_' || c == '"' || c == '\\\\' && c!= EOF) {
        *word++ = c;
    } else {
        *word = '\0';
    }
    return word[0];
}