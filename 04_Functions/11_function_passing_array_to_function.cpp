/*
Concept: Passing Array to a Function
------------------------------------
Array elements are passed by reference by default.
Changes inside function affect original array.
*/

#include <iostream>
using namespace std;

void printArray(int arr[], int size);

int main() {
    int nums[5] = {1, 2, 3, 4, 5};

    printArray(nums, 5);
    return 0;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
