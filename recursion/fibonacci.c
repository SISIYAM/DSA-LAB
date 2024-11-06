#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 6; // Change to any desired position in the Fibonacci sequence
    printf("Fibonacci number at position %d is: %d\n", n, fibonacci(n));
    return 0;
}
