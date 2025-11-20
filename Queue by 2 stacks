#include <iostream>
#include <stack>
using namespace std;
class QueueUsingStacks {
private:
    stack<int> s1, s2;
public:
    // Enqueue operation
    void enqueue(int x) {
        s1.push(x);
        cout << x << " enqueued into queue." << endl;
    }
// Dequeue operation
    void dequeue() {
        if (s2.empty()) {
            if (s1.empty()) {
                cout << "Queue Underflow! Nothing to dequeue." << endl;
                return;
            }
            // Move all elements from s1 to s2
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        cout << s2.top() << " dequeued from queue." << endl;
        s2.pop();
    }
 // Peek operation
    void peek() {
        if (s2.empty()) {
            if (s1.empty()) {
                cout << "Queue is empty!" << endl;
                return;
            }
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        cout << "Front element: " << s2.top() << endl;
    }

    // Display all elements
    void display() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
stack<int> temp1 = s1;
 stack<int> temp2 = s2;  // Move elements from s1 to temp stack to display in correct order
        stack<int> displayStack;
 while (!temp2.empty()) {
            displayStack.push(temp2.top());
            temp2.pop();
        }
while (!temp1.empty()) {
            displayStack.push(temp1.top());
            temp1.pop();
        }
cout << "Queue elements (front to rear): ";
        while (!displayStack.empty()) {
            cout << displayStack.top() << " ";
            displayStack.pop();
        }
        cout << endl;
    }
};
int main() {
    QueueUsingStacks q;
    int choice, value;
while (true) {
        cout << "\n--- Queue Using Two Stacks Menu ---\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Peek\n4. Display Queue\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.peek();
                break;
            case 4:
                q.display();
                break;
            case 5:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    }
}
