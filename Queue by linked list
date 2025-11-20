#include <iostream>
using namespace std;
// Node structure
struct Node {
    int data;
    Node* next;
};
// Queue class using linked list
class Queue {
private:
    Node* front;
    Node* rear;
public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }
// Enqueue operation
    void enqueue(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;
   if (rear == nullptr) { // Queue is empty
            front = rear = newNode;
} else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << value << " enqueued into queue." << endl;
    }
 // Dequeue operation
    void dequeue() {
        if (front == nullptr) {
            cout << "Queue Underflow! Nothing to dequeue." << endl;
            return;
        }
        Node* temp = front;
        cout << front->data << " dequeued from queue." << endl;
        front = front->next;
 if (front == nullptr) { // Queue is now empty
            rear = nullptr;
        }
 delete temp;
    }
// Peek operation (front element)
    void peek() {
        if (front == nullptr) {
            cout << "Queue is empty!" << endl;
        } else {
            cout << "Front element: " << front->data << endl;
        }
    }
// Display all elements
    void display() {
        if (front == nullptr) {
            cout << "Queue is empty!" << endl;
            return;
        }
        Node* temp = front;
        cout << "Queue elements (front to rear): ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
// Destructor to free memory
    ~Queue() {
        while (front != nullptr) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }
};
int main() {
    Queue q;
    int choice, value;
while (true) {
        cout << "\n--- Queue Menu ---\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Peek\n4. Display Queue\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.enqueue(value);     break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.peek(); break;
            case 4:
                q.display();     break;
            case 5:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice! Try again." << endl;  
} }} 
