# Queue Data Structure (C++ Implementation)
A queue is an ordered list in which the first element added is
the first element retrieved or removed (First-In, First-Out).

## Overview
A **Queue** is a linear data structure that follows the **FIFO (First In, First Out)** principle. This project implements a Queue using a **Linked List** in C++.

## Features
- **Enqueue (Insert)** - Adds an element to the queue.
- **Dequeue (Remove)** - Removes an element from the queue.
- **Display** - Prints all elements in the queue.

## Core line of the code
```cpp
struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

class Queue {
private:
    Node *front, *rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (!rear) front = rear = newNode;
        else rear = rear->next = newNode;
    }

    void dequeue() {
        if (!front) return;
        Node* temp = front;
        front = front->next;
        if (!front) rear = nullptr;
        delete temp;
    }

    int peek() { return front ? front->data : -1; }
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
   cd Design-and-Analysis-of-Algorithms/Queues

2. Compile the Program:
   ```sh
   g++ -o queues Queues.cpp

3. Run the executable:
   ```sh
   ./queues

### Example Output

   https://asciinema.org/a/0GDc2RavYPx9BTqOIUMAdm7WP

    Queue after enqueues: 10 20 30
    Queue after one dequeue: 20 30

### Author

    Name : John Paul Barlongo
    GitHub: @IzanagiIzumi
