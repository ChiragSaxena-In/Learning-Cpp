#include <iostream>
using namespace std;

/*
Topic: Array Operations

Operations:
1. Insertion: Add an element at a position by shifting elements.
2. Deletion: Remove element by shifting elements to left.
3. Searching: Find an element (linear search).
4. Updating: Change value at a specific index.

NOTE: - Insertion and deletion require shifting elements.
      - Searching can be optimized with sorted arrays, but linear search is simplest.
*/

int main() {
    int arr[6] = {10, 20, 30, 40, 50};
    int n = 5; // current size of the array

    // Insertion at position 2 (index 1)
    int pos = 1, value = 15;
    for (int i = n; i > pos; i--) arr[i] = arr[i-1];
    arr[pos] = value;
    n++;

    cout << "After insertion: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    // Deletion from position 3 (index 2)
    pos = 2;
    for (int i = pos; i < n-1; i++) arr[i] = arr[i+1];
    n--;

    cout << "After deletion: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    // Searching for element 40
    int key = 40;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = true;
            cout << key << " found at index " << i << endl;
            break;
        }
    }
    if (!found) cout << key << " not found" << endl;

    // Updating element at index 1
    arr[1] = 25;
    cout << "After updating index 1: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
