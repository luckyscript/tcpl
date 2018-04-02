#include <stdio.h>


int strend_ (char *s, char * t) {
    char *ss = s;
    char *st = t;
    for(; *s; s++)
        ;
    for(; *t; t++)
        ;
    for(; *s == *t; s--, t--) {
        if(s == ss || t == st)
            break;
    }
    if(*s == *t && t == st && *s != '\0') {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    printf("%d",strend_("addf", "afff"));
    return 0;
}