// Find Minimum of Two Numbers

#include <stdio.h>

int findMin(int a, int b) {
    return (a < b) ? a : b; // Using a compact ternary operator
}

int main() {
    printf("The minimum is: %d\n", findMin(88, 14));
    return 0;
}