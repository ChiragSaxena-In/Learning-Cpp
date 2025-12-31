#include <iostream>
using namespace std;

/*
    Lower Bound & Upper Bound

    Definitions:
    - Lower Bound: First index where arr[i] >= key
    - Upper Bound: First index where arr[i] > key

    Technique:
    - Modified Binary Search

    Time Complexity:
    - O(log n)

    Space Complexity:
    - O(1)

    Requirement:
    - Array must be sorted
*/

int lowerBound(int arr[], int n, int key) {
    int start = 0, end = n - 1;
    int ans = n;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] >= key) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int upperBound(int arr[], int n, int key) {
    int start = 0, end = n - 1;
    int ans = n;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] > key) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {1, 2, 4, 4, 4, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 4;

    cout << "Lower Bound Index: " << lowerBound(arr, n, key) << endl;
    cout << "Upper Bound Index: " << upperBound(arr, n, key);

    return 0;
}
