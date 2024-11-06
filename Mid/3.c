#include <stdio.h>

int ternarySearch(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1;  // Target not found
    }

    int mid1 = left + (right - left) / 3;
    int mid2 = right - (right - left) / 3;

    if (arr[mid1] == target) {
        return mid1;
    }
    if (arr[mid2] == target) {
        return mid2;
    }

    if (target < arr[mid1]) {
        return ternarySearch(arr, left, mid1 - 1, target);  // Search in the first third
    } else if (target > arr[mid2]) {
        return ternarySearch(arr, mid2 + 1, right, target);  // Search in the third part
    } else {
        return ternarySearch(arr, mid1 + 1, mid2 - 1, target);  // Search in the middle part
    }
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the target value: ");
    scanf("%d", &target);

    int index = ternarySearch(arr, 0, size - 1, target);

    if (index != -1) {
        printf("Target found at index %d.\n", index);
    } else {
        printf("Target not found in the list.\n");
    }

    return 0;
}
