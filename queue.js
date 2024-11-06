const MAX = 100;

let arr = new Array(MAX);
let front = -1, rear = -1;

const isFull = () => {
    return rear === MAX - 1;
}

const isEmpty = () => {
    return front === -1 || front > rear;
}

const enqueue = (value) => {
    if (isFull()) {
        console.log("Queue is full!");
        return;
    }
    if (front === -1) {
        front = 0;
    }
    arr[++rear] = value;
    console.log(value + " enqueued to the queue.");
}

const dequeue = () => {
    if (isEmpty()) {
        console.log("Queue is empty!");
        return -1;
    }
    return arr[front++];
}

const display = () => {
    if (isEmpty()) {
        console.log("Queue is empty!");
        return;
    }
    let queueString = "Queue: ";
    for (let i = front; i <= rear; i++) {
        queueString += arr[i] + " ";
    }
    console.log(queueString);
}

enqueue(10);
enqueue(20);
enqueue(30);
display();
console.log(dequeue() + " dequeued from the queue.");
display();
