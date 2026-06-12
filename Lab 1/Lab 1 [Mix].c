//Problem 1: Ask the user to enter 3 exam scores one after another. Inside the loop, use an if statement to instantly print "Pass" if the score is 50 or higher, or "Fail" if it is lower.
 #include <stdio.h>

int main() {
    int score;

    for (int i = 1; i <= 3; i++) {
        printf("Enter score %d: ", i);
        scanf("%d", &score);

        if (score >= 50) {
            printf("Result: Pass\n");
        } else {
            printf("Result: Fail\n");
        }
    }
    return 0;
}

/*This program uses scanf() with %d format specifier to take the integer 'score' input from the user. The 'for' loop ensures that the program asks for a score exactly
 three times, meaning we don't have to rewrite the 'scanf' code over and over. Each time a 'score' is typed, the 'if-else' statement immediately evaluates it against 
 the benchmark of 50. 
*/




//Problem 2: A small group of 3 friends. Ask for each friend's age. If they are between 13 and 19, print "This friend is a teenager." Otherwise,print  "This friend is not a teenager."
#include <stdio.h>

int main() {
    int age; // This creates a box in memory named 'age'

    for (int i = 1; i <= 3; i++) {
        printf("Enter age for friend %d: ", i);
        scanf("%d", &age); // We take input and put it in the box

        if (age >= 13 && age <= 19) {
            printf("This friend is a teenager.\n");
        } else {
            printf("This friend is not a teenager.\n");
        }
    }
    return 0;
}
/*This program runs a 'for' loop exactly three times, using 'scanf' with the %d format specifier to read the user's input as an integer. The '&age' syntax tells 'scanf' 
the exact memory address. Inside the loop, a conditional statement checks if the stored number falls between 13 and 19 using the logical && (AND) operator. Because this
entire setup is inside the loop, the computer automatically clears out the old value in that memory location and updates it with the new friend's age during each fresh
 iteration.
 */


