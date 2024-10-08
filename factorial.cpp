#include <iostream>
using namespace std;

long long findFactorial(int number) {
    if (number == 0 || number == 1) {
        return 1;
    }
    return number * findFactorial(number - 1);
}

// Method for sum 
int getSum(int num){
   if(num == 0)  
     return 0;

   return (num + getSum(num-1));
}


int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    
    int n = 5;
    cout << "Fibonacci for " << n << ":" << endl;
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    cout << "Sum of numbers from 0 to "<< n <<": " << getSum(4) << endl;

    return 0;
}
