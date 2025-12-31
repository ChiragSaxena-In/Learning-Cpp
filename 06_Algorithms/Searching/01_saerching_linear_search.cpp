#include <iostream>
using namespace std;

/*
    Linear Search Algorithm

    Idea:
    - Traverse array from start to end
    - Compare each element with key
    - Stop when key is found

    Time Complexity:
    - Best Case: O(1)
    - Average Case: O(n)
    - Worst Case: O(n)

    Space Complexity:
    - O(1)

    Works On:
    - Sorted and Unsorted arrays
*/

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 4;

    int index = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            index = i;
            break;
        }
    }

    if(index != -1)
        cout << "Element found at index: " << index;
    else
        cout << "Element not found";

    return 0;
}
