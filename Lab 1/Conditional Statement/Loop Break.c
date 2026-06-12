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

 