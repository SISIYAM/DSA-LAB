#include <stdio.h>
#define max_size 500

int sumOfEvenPositionNumbers(int num){
   int i,sum = 0, index = 0;
   int digit[max_size];
    while (num != 0) {
        digit[index] = num % 10;
        num /= 10;
        index++; 
    }
    int newIndex = 0;
    int newArr[max_size];   
    for(i = index - 1; i >= 0; i--){
        newArr[newIndex] = digit[i];
        newIndex++;
    }

    for(int i=1;i<newIndex;i+=2){
        sum += newArr[i];
    }
    return sum;
}


int main() {
   int number;
   printf("Enter an Integer: ");
   scanf("%d",&number);

   printf("The sum of even position elements is: %d", sumOfEvenPositionNumbers(number));
   
    return 0;
}
