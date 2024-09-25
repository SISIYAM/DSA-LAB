#include <stdio.h>

void searchElement(int list[], int size, int value) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (list[i] == value) {   
            count++;
            break; 
        }
    }
    if(count == 0){
        printf("Element %d not found in the list.\n", value); 
    }else{
        printf("Element %d found in the list.\n", value);
    }
}


int main() {
    int list[5] = {1,2,3,4,5}; 
    int length = sizeof(list)/sizeof(list[0]);
    int searchValue;
    printf("Enter an integer value to search: ");
    scanf("%d", &searchValue); 

    
    searchElement(list, length, searchValue);

    return 0; 
}
