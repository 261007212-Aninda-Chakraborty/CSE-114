// Problem 1: Print Numbers from 1 to 5
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
    return 0;
}

/* We use a standard 'for' loop to handle a known number of repetitions.The loop variable 'i' is
initialized to 1, and the condition 'i <= 5' ensures the loop runs exactly five times. In each 
iteration, 'printf' displays the current value of 'i'. After printing, 'i++' increases the value by 1, 
and the loop terminates as soon as 'i' becomes 6.
*/




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

/* In his problem we see values accumulate inside a loop using an accumulator variable, 'sum'. 
The loop starts at 1 and counts up to the user's input, 'n'. In every iteration, the current value of 'i' 
is added to 'sum' using the '+=' operator. By the time the loop condition 'i <= n' becomes false, sum holds
the total collective value of all integers from 1 to N
*/




//Count Down from 5 to 1
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

/*We  illustrates a decrementing 'while' loop, which is for countdown scenarios.
The loop starts with count initialized to 5 and keeps executing as long as count remains greater than 0.
Inside the block, the program prints the current number and then uses 'count--' to reduce the value by 1.
Once count hits 0, the loop stops, and control moves to the final 'Run' statement.
*/



//Print Even Numbers up to 10
#include <stdio.h>

int main() {
    for (int i = 2; i <= 10; i += 2) {
        printf("%d ", i);
    }
    return 0;
}
/*This problem shows that loop variables don't always have to increase by just 1. By initializing i to 2
and setting the update expression to i += 2, the loop skips odd numbers entirely. It efficiently targets
and prints only the even integers (2, 4, 6, 8, 10). The loop automatically terminates when i reaches 12,
successfully avoiding an unnecessary if condition inside the loop.
*/



