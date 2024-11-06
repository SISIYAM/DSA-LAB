#include <stdio.h>

int stairSteps(int n) {
    if (n <= 1) {
        return 1;
    }
    return stairSteps(n - 1) + stairSteps(n - 2);
}

int main() {
    int n = 5; // Total number of steps
    printf("Number of ways to climb %d steps: %d\n", n, stairSteps(n));
    return 0;
}
