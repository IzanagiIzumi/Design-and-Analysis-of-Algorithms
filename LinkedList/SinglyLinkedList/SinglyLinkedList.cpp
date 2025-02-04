#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class SinglyLinkedList {
private:
    Node* head;

public:
    SinglyLinkedList() {
        head = nullptr;
    }

    bool isEmpty() {
        return head == nullptr;
    }

    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void insertAfterValue(int value, int newVal) {
        Node* temp = head;
        while (temp != nullptr && temp->data != value) {
            temp = temp->next;
        }
        if (temp == nullptr) {
            cout << "Value not found in the list!" << endl;
            return;
        }
        Node* newNode = new Node(newVal);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteAtBeginning() {
        if (isEmpty()) {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteAtEnd() {
        if (isEmpty()) {
            cout << "List is empty!" << endl;
            return;
        }
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr && temp->next->next != nullptr) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }

    void printList() {
        if (isEmpty()) {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    bool search(int val) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == val) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    void reverse() {
        Node *prev = nullptr, *current = head, *next = nullptr;
        while (current != nullptr) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
};

int main() {
    SinglyLinkedList list;

    list.insertAtBeginning(10);
    list.insertAtBeginning(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);
    list.insertAfterValue(20, 25);

    cout << "Original List: ";
    list.printList();

    cout << "After Deleting from the Beginning: ";
    list.deleteAtBeginning();
    list.printList();

    cout << "After Deleting from the End: ";
    list.deleteAtEnd();
    list.printList();

    cout << "Search for 25: " << (list.search(25) ? "Found" : "Not Found") << endl;

    cout << "Reversed List: ";
    list.reverse();
    list.printList();

    return 0;
}
