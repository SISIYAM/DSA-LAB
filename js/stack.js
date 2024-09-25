const stack = [];
let index = -1;
const length = 10;

const isFull = () => {
  return index >= length - 1;
};

const isEmpty = () => {
  return index < 0;
};

const push = (n) => {
  if (!isFull()) {
    index++;
    stack[index] = n;
  } else {
    console.log("Stack is full");
  }
};

const pop = () => {
  if (!isEmpty()) {
    const value = stack[index];
    index--;
    return value;
  } else {
    console.log("Stack is empty");
    return -1;
  }
};

const displayStack = () => {
  if (isEmpty()) {
    console.log("Stack is empty");
    return;
  }
  for (let i = 0; i <= index; i++) {
    process.stdout.write(stack[i] + " ");
  }
  console.log();
};

push(10);
push(20);
push(30);

console.log("Stack after pushes: ");
displayStack();

console.log("Popped values: ", pop(), pop());
console.log("Stack after pops: ");
displayStack();
