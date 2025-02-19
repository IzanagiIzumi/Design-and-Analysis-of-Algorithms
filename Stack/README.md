# Stack Data Structure (C++ Implementation)
A stack is an ordered list in which the last element added is
the first element retrieved or removed (Last-In, First-Out).

## Overview
A **Stack** is a linear data structure that follows the **LIFO (Last In, First Out)** principle.  
This project implements a Stack using a **Linked List** in C++.

## Features
- **Push (Insert)** - Adds an element to the stack.
- **Pop (Remove)** - Removes the top element from the stack.
- **Peek (Top)** - Returns the top element without removing it.
- **Display** - Prints all elements in the stack.

## Core line of the code
```cpp
struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

class Stack {
private:
    Node* top;

public:
    Stack() : top(nullptr) {}

    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (!top) return;
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek() { return top ? top->data : -1; }
};
```

## Installation & Compilation
### Prerequisites:
- C++ Compiler (g++ recommended)
- Git installed

### Steps to Compile and Run:
1. Clone this repository:
   ```sh
   git clone https://github.com/IzanagiIzumi/Design-and-Analysis-of-Algorithms.git
   cd Design-and-Analysis-of-Algorithms/Stack

2. Compile the program:
   ```sh
   g++ -o stack Stack.cpp

3. Run the executable:
   ```sh
   ./stack

### Example Output

   https://asciinema.org/a/QZoAoPRMjV04u2mgpiSxVdgSP

    Stack after push operations: 30 20 10
    Top element: 30
    Stack after one pop: 20 10

### Author

    John Paul Barlongo
    GitHub: @IzanagiIzumi
