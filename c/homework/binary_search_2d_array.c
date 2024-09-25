#include <stdio.h>

int binarySearch2D(int arr[][4], int rows, int cols, int target) {
    int left = 0;
    int right = rows * cols - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        int row = mid / cols;
        int col = mid % cols;
        
        if (arr[row][col] == target) {
            printf("Element %d found at position (%d, %d)\n", target, row, col);
            return 1;  
        } else if (arr[row][col] < target) {
            left = mid + 1; 
        } else {
            right = mid - 1;  
        }
    }

    printf("Element %d not found in the array\n", target);
    return 0; 
}

int main() {
   
    int arr[3][4] = {
        {1, 3, 5, 7},
        {10, 12, 14, 16},
        {18, 20, 22, 24}
    };

    int target;
    printf("Enter the element to search: ");
    scanf("%d", &target);

   
    binarySearch2D(arr, 3, 4, target);

    return 0;
}
