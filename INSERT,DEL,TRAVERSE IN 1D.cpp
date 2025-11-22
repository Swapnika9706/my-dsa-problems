#include <iostream>
using namespace std;
void traverse(int arr[], int n) {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void insertElement(int arr[], int &n, int pos, int value) {
    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = value;
    n++;

    // Print updated array
    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void deleteElement(int arr[], int &n, int pos) {
    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
n--;
 // Print updated array
    cout << "Array after deletion: ";
    

for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[100], n, choice, value, pos;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    while (true) {
        cout << "\n--- Menu ---\n";
        cout << "1. Traverse\n";
        cout << "2. Insert\n";
        cout << "3. Delete\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                traverse(arr, n);
                break;

            case 2:
                cout << "Enter position (0 to " << n << "): ";
                cin >> pos;
                cout << "Enter value: ";
                cin >> value;
                insertElement(arr, n, pos, value);
                break;

            case 3:
                cout << "Enter position to delete (0 to " << n-1 << "): ";
                cin >> pos;
                deleteElement(arr, n, pos);
                break;

            case 4:
                return 0;

            default:
                cout << "Invalid choice!\n";
        }
    }
}
