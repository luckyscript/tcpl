#include <stdio.h>
int
strrindex(char *s, char* t) {
    int i,j,dest;
    dest = -1;
    i = j = 0;
    while(s[i] != '\0') {
        while(t[j] != '\0') {
            printf("%d %d %c %c\n", i, j, s[i], t[j]);
            if(s[i] != t[j]) {
                i++;
                break;
            } else {
                printf("%c %c\n", s[i], t[j]);
                printf("%d %d\n", i, j);
                dest = i - j;
                i++;
                j++;
            }
        }
        printf("i:%d\n", i);
        j = 0;
    }
    return dest;
}

int
main () {
    printf("%d\n", strrindex("adfdf", "df"));
    return 0;
}
