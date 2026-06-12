//Problem 4: Print Even Numbers up to 10
#include <stdio.h>

int main() {
    for (int i = 2; i <= 10; i += 2) {
        printf("%d ", i);
    }
    return 0;
}
/*This problem shows that loop variables don't always have to increase by just 1. By initializing i to 2
and setting the update expression to i += 2, the loop skips odd numbers entirely. It efficiently targets
and prints only the even integers (2, 4, 6, 8, 10). The loop automatically terminates when i reaches 12,
successfully avoiding an unnecessary if condition inside the loop.
*/