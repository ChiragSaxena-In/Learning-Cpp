#include <iostream>
using namespace std;

/*
Topic: 1D Array Basics

Definition:
- Array: A collection of elements of the same type stored in contiguous memory.
- Indexing starts from 0.

Concept:
- The name of the array itself is the base address of the array.
- Base address + i * size_of(element) gives the address of arr[i].
*/

int main() {
    // Declaration and Initialization
    int arr[5] = {10, 20, 30, 40, 50};

    // Traversal
    cout << "Elements of arr: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Base address
    cout << "Base address of arr: " << arr << endl;

    // Address of each element
    for (int i = 0; i < 5; i++) {
        cout << "Address of arr[" << i << "] = " << &arr[i] << endl;
    }

    /*
    Notes:
    - Array name 'arr' is equivalent to &arr[0].
    - Element addresses increase by size of data type (int = usually 4 bytes).
    */

    return 0;
}
