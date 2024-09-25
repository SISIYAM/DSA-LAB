#include <stdio.h>

int main() {
    int n, element, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find frequency: ");
    scanf("%d", &element);

    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            count++;
        }
    }

    printf("Frequency of %d: %d\n", element, count);
    return 0;
}
