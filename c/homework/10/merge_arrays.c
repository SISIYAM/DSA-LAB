#include <stdio.h>

int main() {
    int length1, length2;

    int array1[5] = {1, 2, 3, 4, 5};
    int array2[5] = {7, 8, 9, 10, 11};

    length1 = sizeof(array1) / sizeof(array1[0]);
    length2 = sizeof(array2) / sizeof(array2[0]);

    int mergedArr[length1 + length2], index = 0;

    for (int i = 0; i < length1; i++) {
        mergedArr[index] = array1[i];
        index++;
    }

    for (int i = 0; i < length2; i++) {
      
        mergedArr[index] = array2[i];
        index++;
    }


    printf("Merged Array: ");
    for (int i = 0; i < (length1 + length2); i++) {
        printf("%d ", mergedArr[i]);
    }

    return 0;
}
