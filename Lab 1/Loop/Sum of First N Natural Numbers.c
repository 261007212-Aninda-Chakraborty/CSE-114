// Problem 2: Sum of First N Natural Numbers
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i; // accumulated sum
    }

    printf("Sum = %d\n", sum);
    return 0;
}

/* In this problem we see values accumulate inside a loop using an accumulator variable, 'sum'. 
The loop starts at 1 and counts up to the user's input, 'n'. In every iteration, the current value of 'i' 
is added to 'sum' using the '+=' operator. By the time the loop condition 'i <= n' becomes false, sum holds
the total collective value of all integers from 1 to N
*/
