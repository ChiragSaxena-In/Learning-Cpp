#include <iostream>
using namespace std;

/*
====================================================
Program: Print All Subarrays of an Array
Technique: Brute Force (Index-based)
====================================================

Problem Statement:
Given an array of size n, print all possible subarrays.

Example:
Input:  [1, 2, 3]

Output:
1
1 2
1 2 3
2
2 3
3

----------------------------------------------------
Idea / Approach:
A subarray is defined by two indices:
- start index (i)
- end index (j), where j >= i

Steps:
1. Fix the starting index i
2. Expand the ending index j from i to n-1
3. Print all elements from index i to j

We use three loops:
- Outer loop  -> start index
- Middle loop -> end index
- Inner loop  -> print elements from start to end
----------------------------------------------------
Time Complexity:
O(n³)
- Two loops to generate subarrays
- One loop to print each subarray

Space Complexity:
O(1)
- No extra space used
====================================================
*/

int main() {

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];   // Assuming maximum size of array is 100

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nAll subarrays are:\n";

    // Fix starting index
    for (int i = 0; i < n; i++) {

        // Fix ending index
        for (int j = i; j < n; j++) {

            // Print elements from index i to j
            for (int k = i; k <= j; k++) {
                cout << arr[k] << " ";
            }

            cout << endl;   // New line after each subarray
        }

        cout << endl;       // Separate subarrays starting from next index
    }

    return 0;
}
