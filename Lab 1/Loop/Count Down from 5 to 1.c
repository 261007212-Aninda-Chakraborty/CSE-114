//Problem 3: Count Down from 5 to 1
#include <stdio.h>

int main() {
    int count = 5;
    while (count > 0) {
        printf("%d ", count);
        count--;
    }
    printf("Run!\n");
    return 0;
}

/* I illustrated a decrementing 'while' loop, which is for countdown scenarios.
The loop starts with count initialized to 5 and keeps executing as long as count remains greater than 0.
Inside the block, the program prints the current number and then uses'count--' to reduce the value by 1.
Once count hits 0, the loop stops, and control moves to the final 'Run' statement.
*/