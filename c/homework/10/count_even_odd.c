#include <stdio.h>

int main() {
    int n, evenCount = 0, oddCount = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            evenCount++; 
        } else {
            oddCount++; 
        }
    }

    printf("Even numbers: %d, Odd numbers: %d\n", evenCount, oddCount);
    return 0;
}
