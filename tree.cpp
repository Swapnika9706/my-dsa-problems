#include <iostream>
using namespace std;
// Define a Node of the binary tree
struct Node {
    int data;
    Node* left;
    Node* right;
Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
// Preorder Traversal: Root -> Left -> Right
void preorder(Node* root) {
    if (root != nullptr) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}
// Inorder Traversal: Left -> Root -> Right
void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}
// Postorder Traversal: Left -> Right -> Root
void postorder(Node* root) {
    if (root != nullptr) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}
int main() {
    // Create a sample tree
    //        1
    //       / \
    //      2   3
    //     / \
    //    4   5
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
cout << "Preorder traversal: ";
    preorder(root);
    cout << "\nInorder traversal: ";
    inorder(root);
    cout << "\nPostorder traversal: ";
    postorder(root);
 return 0;
}
