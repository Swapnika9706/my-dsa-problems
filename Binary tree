#include <iostream>
using namespace std;
#define MAX 100  // Maximum size of binary tree
class BinaryTree {
private:
    int arr[MAX];
    int n;  // Number of elements in tree
public:
    BinaryTree() {
        n = 0;  // Initially tree is empty
    }
 // Insert element into the tree (at next available position)
    void insert(int value) {
        if (n >= MAX) {
            cout << "Tree is full! Cannot insert " << value << endl;
            return;
        }
        arr[n] = value;
        n++;
        cout << value << " inserted into the binary tree." << endl;
    }
  // Preorder traversal
    void preorder(int index) {
        if (index >= n) return;
        cout << arr[index] << " ";
        preorder(2 * index + 1);  // Left child
        preorder(2 * index + 2);  // Right child
    }
// Inorder traversal
    void inorder(int index) {
        if (index >= n) return;
        inorder(2 * index + 1);   // Left child
        cout << arr[index] << " ";
        inorder(2 * index + 2);   // Right child
    }
  // Postorder traversal
    void postorder(int index) {
        if (index >= n) return;
        postorder(2 * index + 1);  // Left child
        postorder(2 * index + 2);  // Right child
        cout << arr[index] << " ";
    }
 // Display tree elements (level order)
    void display() {
        if (n == 0) {
            cout << "Tree is empty!" << endl;
            return;
        }
        cout << "Binary Tree elements (level order): ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
}        cout << endl;
    }
};
int main() {
    BinaryTree bt;
    int choice, value;
 while (true) {
        cout << "\n--- Binary Tree Menu ---\n";
        cout << "1. Insert Node\n2. Display Tree (Level Order)\n3. Preorder Traversal\n4. Inorder Traversal\n5. Postorder Traversal\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                bt.insert(value); break;
     case 2:
                bt.display();     break;
     case 3:
                cout << "Preorder Traversal: ";
                bt.preorder(0);
                cout << endl;
                break;
      case 4:
                cout << "Inorder Traversal: ";
                bt.inorder(0);
                cout << endl;
                break;
case 5:
              cout << "Postorder Traversal: ";
                bt.postorder(0);
                cout << endl;
                break;
 case 6:
                cout << "Exiting program." << endl;
                return 0;
default:
                cout << "Invalid choice! Try again." << endl;
        }
    }
}

