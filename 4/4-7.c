void
ungets(char *s) {
    int length = strlen(s);
    void ungetch(int);
    while(length > 0)
     ungetch(s[length--]);
}