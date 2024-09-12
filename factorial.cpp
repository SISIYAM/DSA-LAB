#include <iostream>
using namespace std;

long long findFactorial(int number) {
    if (number == 0 || number == 1) {
        return 1;
    }
    return number * findFactorial(number - 1);
}

int main() {
    cout << "6! = " << findFactorial(6) << endl;
    
 
    
    cout << "50! = " << findFactorial(50) << endl;
    cout << "52! = " << findFactorial(52) << endl;
    cout << "572! = " << findFactorial(572) << endl;

    return 0;
}
