// Check a number is even or odd with boolean return

#include <stdio.h>

int isEven(int num) {
    if (num % 2 == 0) {
        return 1; // 1 means true in C
    }
    return 0;     // 0 means false
}

int main() {
    int testNum = 7;
    if (isEven(testNum)) {
        printf("%d is Even\n", testNum);
    } else {
        printf("%d is Odd\n", testNum);
    }
    return 0;
}