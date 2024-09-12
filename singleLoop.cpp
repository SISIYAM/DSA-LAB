#include <iostream>

using namespace std;

int main() {
    int array[] = {1, 6,5,9,92, 3, -2, -9, 80};
    int length = sizeof(array) / sizeof(array[0]);
    int sum = 0;


    int max = array[0];
    int secondMax = array[0];
    
    for (int i = 0; i < length; i++) {
        // sum
        sum += array[i];
        
        // update max and secondMax
        if (array[i] > max) {
            secondMax = max;
            max = array[i];
        } 
        
        if (array[i] > secondMax && array[i] < max) 
            secondMax = array[i]; 
    }


    (secondMax == max) ? cout << "same as max" << endl :  cout << "sum = " << sum << endl  << "Max = " << max << endl << "Second max single = " << secondMax << endl;

    
    return 0;
}
