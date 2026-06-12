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