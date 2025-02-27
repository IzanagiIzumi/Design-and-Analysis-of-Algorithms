# Doubly Linked List (C++)
A Doubly Linked List is a linked list in which each node contains two pointers, one pointing to the next node and the other pointing to the previous node.

## Overview
This project implements a Doubly Linked List in C++ using a Node class and provides operations such as insertion, deletion, and display.

## Features
- Node Structure: Each node contains data, a pointer to the previous node, and a pointer to the next node.
- Insertion Operation: Adds new nodes at the end of the list.
- Deletion Operation: Deletes nodes with a specific value, adjusting pointers accordingly.
- Display Function: Prints all elements from head to tail.
- Dynamic Memory Allocation: Uses new and delete for node management.

## Core line of the code
```cpp
class Node {
public:
    int data;
    Node* prev;
    Node* next;
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
public:
    DoublyLinkedList() : head(nullptr) {}

    void insertEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }

    void deleteNode(int val) {
        Node* temp = head;
        while (temp && temp->data != val) temp = temp->next;
        if (!temp) return;

        if (temp->prev) temp->prev->next = temp->next;
        if (temp->next) temp->next->prev = temp->prev;
        if (temp == head) head = temp->next;

        delete temp;
    }
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
   cd Design-and-Analysis-of-Algorithms/DoubleLinkedList

2. Compile the Program:
   ```sh
   g++ -o dll DoubleLinkedList.cpp

3. Run the executable:
   ```sh
   ./dll

### Example Output

   https://asciinema.org/a/wrdVugpgrcx9B51y9fKxbKyin

    Doubly Linked List: 10 <-> 20 <-> 30 <-> NULL
    After Deleting 20: 10 <-> 30 <-> NULL
    
### Author

    Name : John Paul Barlongo
    GitHub: @IzanagiIzumi
