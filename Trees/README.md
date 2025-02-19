# Trees Data Strucure
A tree represents a hierarchical nature of a structure in a
graphical form. It consists of elements or nodes, with each
node linked to its successors.

## Binary Search Tree

A **Binary Search Tree** is a hierarchical data structure where:
- The **left child** is smaller than the parent.
- THe **right child** is larger than the parent.

### 📌 Features Implemented:
✅ Insertion
✅ Inorder Traversal
✅ Search

## Core line of the code
```cpp
struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

class BST {
public:
    Node* root;

    BST() { root = nullptr; }

    Node* insert(Node* node, int value) {
        if (!node) return new Node(value);
        if (value < node->data) node->left = insert(node->left, value);
        else if (value > node->data) node->right = insert(node->right, value);
        return node;
    }

    void insert(int value) { root = insert(root, value); }

    void inorder(Node* node) {
        if (!node) return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    void inorder() { inorder(root); cout << endl; }

    bool search(Node* node, int value) {
        if (!node) return false;
        if (node->data == value) return true;
        return value < node->data ? search(node->left, value) : search(node->right, value);
    }

    bool search(int value) { return search(root, value); }
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
   cd Design-and-Analysis-of-Algorithms/Trees

2. Compile the program:
   ```sh
   g++ -o trees Trees.cpp

3. Run the executable:
   ```sh
   ./trees

### Example Output:

   https://asciinema.org/a/epJPg2Ih0071oBMi1lFlW2wXT

    Inorder Traversal: 20 30 40 50 60 70 80 
    Search 40: Found
    Search 100: Not Found

### Author

    Name: John Paul Barlongo
    GitHub: IzanagiIzumi