#include <stdio.h>

void mergeRecursive(int arr1[], int arr1Size, int arr2[], int arr2Size, int mergeArr[], int i, int j, int k) {
    if (i == arr1Size && j == arr2Size) {
        return;
    }

    if (i < arr1Size && (j >= arr2Size || arr1[i] < arr2[j])) {
        mergeArr[k] = arr1[i];
        mergeRecursive(arr1, arr1Size, arr2, arr2Size, mergeArr, i + 1, j, k + 1);
    } else if (j < arr2Size) {
        mergeArr[k] = arr2[j];
        mergeRecursive(arr1, arr1Size, arr2, arr2Size, mergeArr, i, j + 1, k + 1);
    }
}

int main(void) {
    int arr1[] = {2, 67, 99, 103};
    int arr2[] = {3, 45, 56, 111, 145, 200};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int mergeArr[n1 + n2];

    mergeRecursive(arr1, n1, arr2, n2, mergeArr, 0, 0, 0);

    printf("Merged Array: ");
    for (int index = 0; index < n1 + n2; index++) {
        printf("%d ", mergeArr[index]);
    }
    printf("\n");

    return 0;
}