// Absolute Value Function

#include <stdio.h>

int absolute(int num) {
    if (num < 0) {
        return -num; // Flips negative to positive
    }
    return num;
}

int main() {
    printf("Absolute value of -45 is: %d\n", absolute(-45));
    printf("Absolute value of 20 is: %d\n", absolute(20));
    return 0;
}