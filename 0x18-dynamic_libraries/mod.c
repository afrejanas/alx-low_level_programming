#include <stdio.h>

int mod(int a, int b) {
    if (b == 0) {
        printf("Error: Modulo by zero\n");
        return (0);
    }
    return (a % b);
}
