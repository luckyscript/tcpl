#define BUFSIZE 100

int buf = 0;

int
getch(void) {
    int c;
    if(buf == 0) {
        c = getchar();
    } else {
        c = buf;
        buf = 0;
    }
    return c;
}

void
ungetch(c) {
    if(buf == 0) {
        buf = c;
    } else {
        printf("max size of buffer is 1");
    }
}