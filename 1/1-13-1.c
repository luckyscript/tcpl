#include <stdio.h>

#define MAX_LEN 15

int
main() {
    int arr[MAX_LEN];
    for(int i = 0; i != MAX_LEN; i++) {
        arr[i] = 0;
    }
    int c, wl=0;
    while((c = getchar()) != EOF) {
        if(c == ' ' || c == '\n' || c == '\t') {
            arr[wl-1]++;
            wl = 0;
        } else {
            wl++;
        }
    }
    // for()
    for(int i = 0; i != MAX_LEN; i++) {
        printf("\n");
        printf("%d:", i);
        for(int j = 0; j != arr[i]; j++) {
            printf("*");
        }
    }
    return 0;
}