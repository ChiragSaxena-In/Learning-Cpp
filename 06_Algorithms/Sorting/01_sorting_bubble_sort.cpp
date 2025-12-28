#include <iostream>
using namespace std;

/*
    Bubble Sort Algorithm

    Idea:
    - Compare adjacent elements
    - Swap if they are in wrong order
    - Largest element moves to the end in each pass

    Time Complexity:
    - Best Case: O(n)
    - Average Case: O(n^2)
    - Worst Case: O(n^2)

    Space Complexity:
    - O(1)

    Stable: Yes
*/

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        if(!swapped)
            break;
    }

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
