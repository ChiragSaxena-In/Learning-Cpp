#include <iostream>
using namespace std;

/*
    Selection Sort Algorithm

    Idea:
    - Select the minimum element from the unsorted part
    - Place it at the correct position

    Time Complexity:
    - Best Case: O(n^2)
    - Average Case: O(n^2)
    - Worst Case: O(n^2)

    Space Complexity:
    - O(1)

    Stable: No
*/

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if(minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
