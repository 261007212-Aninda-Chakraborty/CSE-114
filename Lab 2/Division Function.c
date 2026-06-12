// Division Function

#include <stdio.h>

float divide(int a, int b) {
    return (float)a / b; // Typecasting prevents integer truncation
}

int main() {
    printf("Division result: %.2f\n", divide(10, 3));
    return 0;
}