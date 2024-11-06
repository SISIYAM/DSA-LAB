#include<iostream>
using namespace std;

void binarySearch(int arr[],int length,int target){
 int i,found = 0;
    for(i=0;i<length;i++){
        if(arr[i] == target){
            cout << "Found at index "<< i << endl;
            found++;
        }
    }

    if(found == 0){
        cout << "Element not found";
    }

}

int main() {
    int array[5] = {1,4,3,4,5};
    binarySearch(array,5,4);
}