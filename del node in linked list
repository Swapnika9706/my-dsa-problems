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
        head = nullptr;
    }
// Insert at end (helper function)
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
    }
 // Delete node by value
    void deleteByValue(int value) {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
Node* temp = head;
        Node* prev = nullptr;   // If head node is the node to be deleted
        if (temp->data == value) {
            head = head->next;
            delete temp;
            cout << "Node with value " << value << " deleted." << endl;
            return;
        }      // Search for the node to delete
        while (temp != nullptr && temp->data != value) {
            prev = temp;
            temp = temp->next;
        }
if (temp == nullptr) {
            cout << "Value " << value << " not found in list." << endl;
        } else {
            prev->next = temp->next;
            delete temp;
            cout << "Node with value " << value << " deleted." << endl;
        }
    }  // Delete node by position (1-based index)
    void deleteByPosition(int position) {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }  if (position <= 0) {
            cout << "Invalid position!" << endl;
            return;
        }
Node* temp = head;    // If head needs to be removed
        if (position == 1) {
            head = head->next;
            delete temp;
            cout << "Node at position " << position << " deleted." << endl;
            return;
        }     // Find previous node of the node to be deleted
        Node* prev = nullptr;
for (int i = 1; i < position && temp != nullptr; i++) {
            prev = temp;
            temp = temp->next;
        }
 if (temp == nullptr) {
            cout << "Position " << position << " does not exist." << endl;
        } else {
            prev->next = temp->next;
            delete temp;
            cout << "Node at position " << position << " deleted." << endl;
        }
    }       // Display linked list
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
        cout << "1. Insert at End\n2. Delete by Value\n3. Delete by Position\n4. Display List\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                list.insertAtEnd(value);
                break;
            case 2:
                cout << "Enter value to delete: ";
                cin >> value;
                list.deleteByValue(value);
                break;

            case 3:
                cout << "Enter position to delete: ";
                cin >> position;
                list.deleteByPosition(position);   break;
case 4:
                list.display();   break;
case 5:
                cout << "Exiting program." << endl;
                return 0;   
default:
                cout << "Invalid choice! Try again." << endl; 
)
}
}
