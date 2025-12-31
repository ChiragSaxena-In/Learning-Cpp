#include <iostream>
using namespace std;

/*
    Binary Search Algorithm (Recursive)

    Idea:
    - Divide and Conquer approach
    - Recursively search left or right half

    Time Complexity:
    - O(log n)

    Space Complexity:
    - O(log n) due to recursion stack
*/

int binarySearch(int arr[], int start, int end, int key) {
    if(start > end)
        return -1;

    int mid = start + (end - start) / 2;

    if(arr[mid] == key)
        return mid;
    else if(arr[mid] < key)
        return binarySearch(arr, mid + 1, end, key);
    else
        return binarySearch(arr, start, mid - 1, key);
}

int main() {
    int arr[] = {1, 2, 4, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;

    int index = binarySearch(arr, 0, n - 1, key);

    if(index != -1)
        cout << "Element found at index: " << index;
    else
        cout << "Element not found";

    return 0;
}
