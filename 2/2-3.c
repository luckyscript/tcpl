int htoi(char a[]) {
    int i = 0;
    int n = 0;
    if(a[0] == '0') {
        i = 2;
    }
    while(a[i] != '\0') {
        n = n*16+ a[i];
    }
    return n;
}