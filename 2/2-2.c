#include <stdio.h>
int
main() {
    
    int bool = 1;
    int i,lim;
    int c;
    while (1) {
        if(!(i<lim-1)) {
            bool = 0;
        } else if((c=getchar()) != '\n') {
            bool = 0;
        } else if (c != EOF) {
            bool = 0;
        }
        if (bool) {
            // TODO
        }
        i++;
    }

    return 0;
}