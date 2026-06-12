// Find Maximum of Two Numbers

#include <stdio.h>

int findMax(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    printf("The maximum is: %d\n", findMax(25, 42));
    return 0;
}