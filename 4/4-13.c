void reverse(char *s) {
    int len = strlen(s);
    reverseStr(s, 0, len);
}

void reverseStr(char *s, int from, int to) {
    swap(s[from], s[to]);
    if(to-1>=from)
        reverseStr(s, from+1, to - 1);
}