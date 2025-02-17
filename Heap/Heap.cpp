#include <iostream>
#include <vector>
using namespace std;

class MaxHeap {
private:
    vector<int> heap;

    // Bubble up to maintain heap property
    void heapifyUp(int index) {
        int parent = (index - 1) / 2;
        while (index > 0 && heap[index] > heap[parent]) {
            swap(heap[index], heap[parent]);
            index = parent;
            parent = (index - 1) / 2;
        }
    }

    // Bubble down after removing the root
    void heapifyDown(int index) {
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        int largest = index;

        if (left < heap.size() && heap[left] > heap[largest])
            largest = left;
        if (right < heap.size() && heap[right] > heap[largest])
            largest = right;
        if (largest != index) {
            swap(heap[index], heap[largest]);
            heapifyDown(largest);
        }
    }

public:
    // Insert a new element
    void insert(int value) {
        heap.push_back(value);
        heapifyUp(heap.size() - 1);
    }

    // Remove the maximum element (root)
    int extractMax() {
        if (heap.empty()) {
            cout << "Heap is empty!" << endl;
            return -1;
        }
        int maxVal = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
        return maxVal;
    }

    // Print the heap
    void printHeap() {
        for (int val : heap)
            cout << val << " ";
        cout << endl;
    }
};

// Main function
int main() {
    MaxHeap heap;
    heap.insert(50);
    heap.insert(30);
    heap.insert(40);
    heap.insert(10);
    heap.insert(20);
    heap.insert(35);
    heap.insert(60);

    cout << "Heap elements: ";
    heap.printHeap();

    cout << "Extracted Max: " << heap.extractMax() << endl;

    cout << "Heap after extraction: ";
    heap.printHeap();

    return 0;
}
