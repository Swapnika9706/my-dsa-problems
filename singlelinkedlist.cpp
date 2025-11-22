#include <iostream>
using namespace std;
// Node structure
struct Node {
    int data;
    Node* next;
};
// Linked List class
class SinglyLinkedList {
private:
    Node* head;
public:
    SinglyLinkedList() {
        head = nullptr; // Initially empty list
    }
// Insert at beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
        cout << value << " inserted at the beginning." << endl;
    }
// Insert at end
    void insertAtEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;
if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << value << " inserted at the end." << endl;
    } // Insert at a given position (1-based index)
    void insertAtPosition(int value, int position) {
        if (position <= 0) {
            cout << "Invalid position!" << endl;
            return;
        }
 if (position == 1) {
            insertAtBeginning(value);
            return;
        }
Node* newNode = new Node();
        newNode->data = value;
Node* temp = head;
        for (int i = 1; i < position - 1 && temp != nullptr; i++) {
            temp = temp->next;
        }
  if (temp == nullptr) {
            cout << "Position is beyond list length. Inserting at end." << endl;
            insertAtEnd(value);
        } else {
            newNode->next = temp->next;
            temp->next = newNode;
            cout << value << " inserted at position " << position << "." << endl;
        }
    }   // Display the linked list
    void display() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
Node* temp = head;
        cout << "Linked List: ";
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }// Destructor to free memory
    ~SinglyLinkedList() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};
int main() {
    SinglyLinkedList list;
    int choice, value, position;
while (true) {
        cout << "\n--- Singly Linked List Menu ---\n";
        cout << "1. Insert at Beginning\n2. Insert at End\n3. Insert at Position\n4. Display List\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                list.insertAtBeginning(value);    break;
case 2:
                cout << "Enter value: ";
                cin >> value;
                list.insertAtEnd(value);       break;
case 3:
                cout << "Enter value: ";
                cin >> value;
                cout << "Enter position: ";
                cin >> position;
                list.insertAtPosition(value, position);  break;
 case 4:
                list.display();   break;
case 5:
                cout << "Exiting program." << endl;
                return 0;      default:
                cout << "Invalid choice! Try again." << endl;
        }
    }
}
