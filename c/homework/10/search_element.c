#include <stdio.h>

int main() {
    int n, search, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search for: ");
    scanf("%d", &search);

    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("%d is present in the array.\n", search);
    } else {
        printf("%d is not present in the array.\n", search);
    }

    return 0;
}
