// Problem 1: Print Numbers from 1 to 5
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
    return 0;
}

/* I used a standard 'for' loop to handle a known number of repetitions.The loop variable 'i' is
initialized to 1, and the condition 'i <= 5' ensures the loop runs exactly five times. In each 
iteration, 'printf' displays the current value of 'i'. After printing, 'i++' increases the value by 1, 
and the loop terminates as soon as 'i' becomes 6.
*/
