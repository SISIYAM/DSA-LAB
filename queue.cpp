#include <iostream>
using namespace std;

#define MAX 100 

int arr[MAX],front = -1, rear = -1;


// check if the queue is full
bool isFull() {
    return rear == MAX - 1;
}

// check if the queue is empty
bool isEmpty() {
    return front == -1 || front > rear;
}

// method for enqueue
void enqueue(int value) {
    if (isFull()) { 
        cout << "Queue is full!" << endl;
        return;
    }
    if (front == -1) {
        front = 0; 
    }
    arr[++rear] = value;
    cout << value << " enqueued to the queue." << endl;
}

// method for dequeue
int dequeue() {
    if (isEmpty()) { 
        cout << "Queue is empty!" << endl;
        return -1; 
    }
    return arr[front++];
}

// display the queue
void display() {
    if (isEmpty()) {
        cout << "Queue is empty!" << endl;
        return;
    }
    cout << "Queue: ";
    for (int i = front; i <= rear; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    
    display();

    cout << dequeue() << " dequeued from the queue." << endl;
    display();

    return 0;
}
