// Problem 1: Write a program that iterates from 1 to 10 and prints whether each number is even or odd.
#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            printf("%d is Even\n", i);
        } else {
            printf("%d is Odd\n", i);
        }
    }
    return 0;
}
/* I used a 'for' loop to generate a sequence of numbers from 1 to 10. Inside the loop, the modulo operator '(%)' calculates the remainder
when 'i' is divided by 2. If the remainder is 0, the if condition is true, marking the number as even. If the remainder is not 0, the 'else' block 
executes, identifying the number as 'odd'. 
*/

