// Series sum

#include <stdio.h>

double seriesSum(int n, int k) {
    double sum = 0.0;

    for (int i = 1; i <= n; i++) {
        if (i % k != 0) {  // Skip every k-th term
            sum += 1.0 / i;
        }
    }
    return sum;
}

int main() {
    int n, k;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of k (term to skip): ");
    scanf("%d", &k);

    double result = seriesSum(n, k);
    printf("The sum of the series is approximately: %.5f\n", result);

    return 0;
}
