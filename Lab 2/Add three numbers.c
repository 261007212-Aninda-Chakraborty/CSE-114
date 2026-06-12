//Add three numbers

#include <stdio.h>

int add3(int a, int b, int c) {
    return a + b + c;
}
int a,b,c =10,20,30;

int main() {
    printf("Sum of three numbers: %d\n", add3(10, 20, 30));
    return 0;
}