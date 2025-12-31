#include <iostream>
using namespace std;

/*
    Binary Search Algorithm (Iterative)

    Idea:
    - Works on sorted arrays
    - Compare key with middle element
    - Eliminate half of the array each step

    Time Complexity:
    - Best Case: O(1)
    - Average Case: O(log n)
    - Worst Case: O(log n)

    Space Complexity:
    - O(1)

    Requirement:
    - Array must be sorted
*/

int main() {
    int arr[] = {1, 2, 4, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 5;

    int start = 0, end = n - 1;
    int index = -1;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] == key) {
            index = mid;
            break;
        }
        else if(arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }

    if(index != -1)
        cout << "Element found at index: " << index;
    else
        cout << "Element not found";

    return 0;
}
