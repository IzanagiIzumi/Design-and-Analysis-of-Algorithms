# Circular Linked List (C++ Implementation)
A Circular Linked List is a linked list where all nodes are connected to form a circle, with no NULL pointers.

## Overview
This project implements a Circular Linked List in C++ using a Node structure and provides operations such as insertion and display.

## Features
- Node Structure: Each node contains data and a pointer to the next node.
- Circular Nature: The last node points back to the head, forming a loop.
- Insertion Operation: Adds new nodes at the end and maintains the circular property.
- Display Function: Prints all elements in the list, starting from the head and looping back.
- Dynamic Memory Allocation: Uses new and Node* pointers for memory management.

## Installation & Compilation
### Prerequisites:
- C++ Compiler (g++ recommended)
- Git installed

### Steps to Compile and Run:
1. Clone this repository:
   ```sh
   git clone https://github.com/IzanagiIzumi/Design-and-Analysis-of-Algorithms.git
   cd Design-and-Analysis-of-Algorithms/CicularLinkedList

2. Compile the Program:
   ```sh
   g++ -o cll CircularLinkedList.cpp

3. Run the executable:
   ```sh
   ./cll

### Example Output

   https://asciinema.org/a/hecY3pl7fvhSSjjJULiGyAlZh
    
    Circular Linked List: 10 -> 20 -> 30 -> 40 -> (head)
   
### Author

    Name : John Paul Barlongo
    GitHub: @IzanagiIzumi
