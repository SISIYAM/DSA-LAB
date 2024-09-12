#include<iostream>
using namespace std;

int stack[10];
int index = -1;
int length;

// method to check if the array is full
bool isFull(){
    return index >= length - 1;
}

// method to check if the array is empty
bool isEmpty(){
    return index < 0;
}

// method to push an element into the stack
void push(int n){
    if(!isFull()){
        index++;
        stack[index] = n;
    } else {
        cout << "Stack is full" << endl;
    }
}

// method to pop an element from the stack
int pop(){
    if(!isEmpty()){
        int value = stack[index];
        index--;
        return value;
    } else {
        cout << "Stack is empty" << endl;
        return -1; 
    }
}

// method to display the stack 
void displayStack() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
        return;
    }
    for (int i = 0; i <= index; ++i) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

int main() {
    length = sizeof(stack) / sizeof(stack[0]);
    
    push(10);
    push(20);
    push(30);
    
    cout << "Stack after pushes: ";
    displayStack();
    
    cout << "Popped value: " << pop() << pop() << endl;
    cout << "Stack after pop: ";
    displayStack();
    
    return 0;
}
