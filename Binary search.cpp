#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;   // Key found at index mid
        else if (arr[mid] < key)
            low = mid + 1;   // Search in right half
        else
            high = mid - 1;  // Search in left half
    }
    return -1;  // Key not found
}

int main() {
    int n, key, arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements in sorted order:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];


    cout << "Enter element to search: ";
    cin >> key;

    int result = binarySearch(arr, n, key);

    if (result == -1)
        cout << "Element not found." << endl;
    else
        cout << "Element found at index: " << result << endl;

    return 0;
}
