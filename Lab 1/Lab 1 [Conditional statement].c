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
executes, identifying the number as 'odd'. */




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




 //Problem 3: Calculate the sum of all integers between 1 and 20 that are divisible by 3.
 #include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 1; i <= 20; i++) {
        if (i % 3 == 0) {
            sum += i; 
        }
    }
    printf("Sum of multiples of 3: %d\n", sum);
    return 0;
}

/* In this program we filter values during a summation process. The loop traverses every integer from 1 to 20, but the sum variable only increments if 
 the current value of 'i' is a multiple of 3 (determined by i % 3 == 0). If the condition is false, the loop simply moves to the next iteration without 
 modifying the sum. sum += i is the same as sum= sum+i
 */





 //Problem 4: Loop from 1 to 10 and print numbers, but stop the loop immediately if the number 7 is reached.
 #include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 7) {
            break; // Exit the loop entirely
        }
        printf("%d ", i);
    }
    return 0;
}
/*This code uses an if statement to monitor the loop's progress for a specific trigger condition. When i reaches 7, the if condition becomes true, 
and the break statement executes, which forcefully exits the for loop, ignoring the remaining iterations. Consequently, the program prints 1 through 6
 and stops before 7 is ever displayed. This is a common pattern for optimizing searches or handling error conditions within loops. The %d format specifier
  is also used in printf*() to display integer values
 */

 