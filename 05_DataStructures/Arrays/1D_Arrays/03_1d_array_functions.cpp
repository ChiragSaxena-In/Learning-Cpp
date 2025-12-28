#include <iostream>
using namespace std;

/*
Topic: Passing 1D Arrays to Functions

Concepts:
- Formal Parameter: Variable defined in the function (e.g., arr[], size)
- Actual Argument: Value passed when calling function (e.g., arr, n)
- Arrays are passed by reference by default.
*/

void printArray(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
}

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) sum += arr[i];
    return sum;
}

int main() {
    int arr[] = {5, 10, 15, 20};
    int n = 4;

    printArray(arr, n); // actual arguments: arr, n

    int total = sumArray(arr, n);
    cout << "Sum of array elements: " << total << endl;

    return 0;
}
