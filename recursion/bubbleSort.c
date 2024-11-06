#include <stdio.h>

void bubbleSortRecursive(int arr[], int size) {
    // Base case: If the array size is 1, it's already sorted
    if (size == 1) {
        return;
    }

    // One pass of bubble sort. After this, the largest element is at the end.
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            // Swap if the current element is greater than the next
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    // Largest element is fixed, now sort the remaining array
    bubbleSortRecursive(arr, size - 1);
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSortRecursive(arr, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
