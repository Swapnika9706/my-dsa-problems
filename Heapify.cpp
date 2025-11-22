#include <iostream>
using namespace std;
// Function to heapify a subtree rooted at index i
// n is the size of the heap
void heapify(int arr[], int n, int i) {
    int largest = i;        // Initialize largest as root
    int left = 2 * i + 1;   // left child
    int right = 2 * i + 2;  // right child
 // If left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;
// If right child is larger than largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;
// If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);
        // Recursively heapify the affected subtree
        heapify(arr, n, largest);
    }
}
// Function to build a Max Heap from an array
void buildMaxHeap(int arr[], int n) {
    // Start from the last non-leaf node and heapify each node
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}
// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main() {
    int arr[] = {4, 10, 3, 5, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
cout << "Original array: ";
    printArray(arr, n);
buildMaxHeap(arr, n);
cout << "Max Heap: ";
    printArray(arr, n);
return 0;
}
