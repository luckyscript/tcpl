void strncpy(char *s, char *t, int n) {
    while(*s++ = *t++ && n)
        n--;    
}


int strncmp(char *s, char *t, int n) {
    for(; *s == *t && n; s++, t++) {
        n--;
        if(*s == '\0')
            return 0;
    }
    return *s - *t;
}