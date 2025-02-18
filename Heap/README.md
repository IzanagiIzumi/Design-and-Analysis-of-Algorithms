# MaxHeap Data Structure (C++ Implementation)
A MaxHeap is a complete binary tree where the value of each node is greater than or equal to the values of its children.

## Overview
This repository implements a MaxHeap in C++ using a dynamic array (vector) and provides operations such as insertion, extraction of the maximum element, and heap printing.

### Features
- Dynamic Storage: Utilizes std::vector for dynamic memory allocation.
- Insertion Operation: Adds elements and maintains the heap property using heapifyUp.
- Extraction Operation: Removes the maximum element and reorganizes the heap using heapifyDown.
- Heapify Operations: Maintains heap property after operations.
- Error Handling: Handles empty heap scenarios.
- Printing Function: Displays all heap elements.
- Insertion: O(log n)
- Extraction: O(log n)
- Printing: O(n)

## Installation & Compilation
### Prerequisites:
- C++ Compiler (e.g., g++)
- Git Installed

### Steps to compile and run:
1. Clone this repository:
   ```sh
   git clone https://github.com/IzanagiIzumi/Design-and-Analysis-of-Algorithms.git
   cd Design-and-Analysis-of-Algorithms/Heap

2. Compile the code:
   ```sh
   g++ -o heap Heap.cpp

3. Run the executable:
   ```sh
   ./heap

### Example Output

   https://asciinema.org/a/wSszkIx0HEXQ4PlPAsrqfbjq6

   Heap elements: 60 50 40 10 20 35 30
   Extracted Max: 60
   Heap after extraction: 50 30 40 10 20 35

### Author

    Name: John Paul Barlongo
    GitHub: @IzanagiIzumi