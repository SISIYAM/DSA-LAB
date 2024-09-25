#include <stdio.h>

int main() {
    int n=5, largest, secondLargest;

    int arr[5] = {1,2,3,4,5};

    largest = secondLargest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    printf("First largest element: %d\n", largest);
    printf("Second largest element: %d\n", secondLargest);
    return 0;
}
