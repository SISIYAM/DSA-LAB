#include <stdio.h>

void mergeIterative(int arr1[], int arr1Size, int arr2[], int arr2Size, int mergeArr[]) {
    int i = 0, j = 0, k = 0;

    // Merge elements from arr1 and arr2 into mergeArr
    while (i < arr1Size && j < arr2Size) {
        if (arr1[i] < arr2[j]) {
            mergeArr[k++] = arr1[i++];
        } else {
            mergeArr[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1, if any
    while (i < arr1Size) {
        mergeArr[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2, if any
    while (j < arr2Size) {
        mergeArr[k++] = arr2[j++];
    }
}

int main(void) {
    int arr1[] = {2, 67, 99, 103};
    int arr2[] = {3, 45, 56, 111, 145, 200};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int mergeArr[n1 + n2];

    mergeIterative(arr1, n1, arr2, n2, mergeArr);

    printf("Merged Array: ");
    for (int index = 0; index < n1 + n2; index++) {
        printf("%d ", mergeArr[index]);
    }
    printf("\n");

    return 0;
}
