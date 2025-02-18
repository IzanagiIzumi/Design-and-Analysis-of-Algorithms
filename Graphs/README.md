# Graph Data Structure (C++ Implementation)
A graph consists of a set of vertices (or nodes) and a set of
edges (relations) between the pairs of vertices

## Overview
A **Graph** is a set of **vertices (nodes)** connected by **edges**.  
This project implements a **Graph using an Adjacency List** in C++ and demonstrates **Dijkstra’s Algorithm** for finding the shortest path.

## Features
- **Add Edge** - Adds a weighted edge between two nodes.
- **Dijkstra's Algorithm** - Finds the shortest path from a source node.
- **Efficient using Priority Queue** (O(V + E log V) complexity).

## Installation & Compilation
### Prerequisites:
- C++ Compiler (g++ recommended)
- Git installed

### Steps to Compile and Run:
1. Clone this repository:
   ```sh
   git clone https://github.com/IzanagiIzumi/Design-and-Analysis-of-Algorithms.git
   cd Design-and-Analysis-of-Algorithms/Graph

2. Compile the program:
   ```sh
   g++ -o graphs Graphs.cpp

3. Run the executable:
   ```sh
   ./graphs

### Example Output:

   https://asciinema.org/a/MmLJPj2uerFymYFXS9rPqVIsK
   
    Dijkstra's Shortest Path Algorithm:
    Vertex  Distance from Source 0
    0        0
    1        3
    2        1
    3        4
    4        7

### Author
    Name: John Paul Barlongo
    Github:@IzanagiIzumi