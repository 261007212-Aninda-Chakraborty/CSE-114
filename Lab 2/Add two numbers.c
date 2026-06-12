// Add two numbers

#include <stdio.h>

int add2(int a, int b) {
    return a + b;
}

int main() {
    int result = add2(5, 7);
    printf("Sum of two numbers: %d\n", result);
    return 0;
}