#include <stdio.h>

int main() {
    int smallest;

    int arr[5] = {1,2,3,4,5};

    smallest = arr[0]; 

    for (int i = 1; i < 5; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Smallest element: %d\n", smallest);
    return 0;
}
