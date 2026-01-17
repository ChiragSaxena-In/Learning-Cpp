/*
    Equilibrium Index

    Idea:
    Index where sum of elements on left
    equals sum of elements on right.

    Optimized Approach:
    - Compute total sum
    - Maintain running left sum
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {-7, 1, 5, 2, -4, 3, 0};
    int n = arr.size();

    int totalSum = 0;
    for (int x : arr) totalSum += x;

    int leftSum = 0;

    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            cout << "Equilibrium Index found at: " << i << "\n";
        }

        leftSum += arr[i];
    }

    return 0;
}
