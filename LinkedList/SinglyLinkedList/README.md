# Singly Linked List (C++)
A Singly Linked List is a linear data structure in which each node points to the next node, forming a chain.

## Overview
This project implements a Singly Linked List in C++ using a Node structure and provides operations such as insertion, deletion, search, and reversal.

## Features
**Node Structure:** Each node contains an integer data value and a pointer to the next node.

**Insertion Operations:**
- Insert at the beginning
- Insert at the end
- Insert after a specific value

**Deletion Operations:**
- Delete from the beginning
- Delete from the end

**Search Function:** Searches for a specific value in the list.

**Reverse Operation:** Reverses the linked list.

**Display Function:** Prints all elements from head to tail.

**Dynamic Memory Allocation:** Uses new and delete for node management.

## Core Line of the Code

'''cpp
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class SinglyLinkedList {
private:
    Node* head;

public:
    SinglyLinkedList() : head(nullptr) {}

    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }

    void deleteAtBeginning() {
        if (!head) return;
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteAtEnd() {
        if (!head) return;
        if (!head->next) {
            delete head;
            head = nullptr;
            return;
        }
        Node* temp = head;
        while (temp->next && temp->next->next) temp = temp->next;
        delete temp->next;
        temp->next = nullptr;
    }

    void reverse() {
        Node *prev = nullptr, *current = head, *next = nullptr;
        while (current) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
};

## Installation & Compilation
### Prerequisites:
- C++ Compiler (g++ recommended)
- Git installed

### Steps to Compile and Run:
1. Clone this repository:
   ```sh
   git clone https://github.com/IzanagiIzumi/Design-and-Analysis-of-Algorithms.git
   cd Design-and-Analysis-of-Algorithms/SinglyLinkedList

2. Compile the Program:
   ```sh
   g++ -o sll SinglyLinkedList.cpp

3. Run the executable:
   ```sh
   ./sll

### Example Output

   https://asciinema.org/a/wtdYGIdZMS54fVwZooyOjOR8S

    Original List: 20 -> 10 -> 30 -> 40 -> 25 -> NULL
    After Deleting from the Beginning: 10 -> 30 -> 40 -> 25 -> NULL
    After Deleting from the End: 10 -> 30 -> 40 -> NULL
    Search for 25: Found
    Reversed List: 40 -> 30 -> 10 -> NULL
    
### Author

    Name : John Paul Barlongo
    GitHub: @IzanagiIzumi
