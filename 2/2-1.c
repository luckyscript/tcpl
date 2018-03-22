#include <stdio.h>
#include <limits.h>

int
main() {
    printf("signed char max %d\n", (char)((unsigned char) ~0 >> 1));
    printf("signed char min %d\n", -(char)((unsigned char) ~0 >> 1));
    return 0;
}