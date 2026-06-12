//Problem 2: Input 5 numbers from the user and determine the largest value among them.
#include <stdio.h>

int main() {
    int num, max = -9999; 
    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        if (num > max) {
            max = num; // 
        }
    }
    printf("The maximum number is: %d\n", max);
    return 0;
}

/* I initialized a variable max to a very low value like '-9999' to act as a baseline for comparison. During each of the five iterations, the user provides 
a number, and the if statement checks if the new input is strictly greater than the current max. If the condition is met, max is updated to the new value.
By the end of the loop, max holds the largest integer provided by the user. 

Why did I use a number like '-9999' and not '-5'or '-10'?
- If I set max to 0, and user inputs only negative numbers (like -5, -10, -2), m program would incorrectly say 0 is the maximum, even though 0 was never entered.
  By setting max to a very small number (like -9999), you are essentially creating a "floor." Since almost any number the user enters will be larger than -9999, 
  the first number entered will almost certainly replace that placeholder as the new max.
 */