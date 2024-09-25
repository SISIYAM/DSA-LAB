#include <stdio.h>

int stack[2];
int index = -1;
int length = sizeof(stack) / sizeof(stack[0]);  


int isFull() {
    if(index >= length - 1)
        return 1;
    else
        return 0;
}


int isEmpty() {
    if(index < 0)
        return 1;
    else
        return 0;
}

void push(int n) {
    if(!isFull()) {
        index++;
        stack[index] = n;
    } else {
        printf("Stack overflow\n");
    }
}

int pop() {
    if(!isEmpty()) {
        int value = stack[index];
        index--;
        return value;
    } else {
        printf("Stack is empty\n");
        return -1;
    }
}

void displayStack() {
    if(!isEmpty()) {
        for (int i = 0; i <= index; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n"); 
    } else {
        printf("Stack is empty\n");
    }
}

int main() {
 
    push(11);
    push(13);
    push(156);

    
    printf("Stack after pushes: ");
    displayStack();

  
    printf("Popped value: %d\n", pop());
    printf("Stack after pop: ");
    displayStack();
    
    return 0;
}
