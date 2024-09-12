#include <iostream>

using namespace std;

int main() {
    int array[8] = {1, 6, 5, 2, 3, -2, -9, 80};
    int length, sum = 0;

    length = sizeof(array) / sizeof(array[0]);

    // Find the sum value
    for (int i = 0; i < length; i++) {
        sum += array[i];
    }

   
    int max = array[0];
    int secondMax = array[0];  
    int maxIndex;

    // Find the largest value
    for (int i = 0; i < length; i++) {
        if (array[i] > max ) {
            max = array[i];
            maxIndex = i;
        }
    }

    // Find the second largest value
    for (int i = 0; i < length; i++) {
        if(maxIndex == i)
        continue;

        if(array[i] > secondMax ){
            secondMax = array[i];
        }
    }

      cout <<  "sum = " << sum << endl <<  "Max = " << max << endl << "Second max = " << secondMax << endl;

    return 0;
}
