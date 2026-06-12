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