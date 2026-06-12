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

