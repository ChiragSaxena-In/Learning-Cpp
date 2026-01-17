/*
    Prefix Sum Basics

    Idea:
    Prefix sum stores the sum of elements from index 0 to i.
    This avoids recalculating sums again and again.

    prefix[i] = arr[0] + arr[1] + ... + arr[i]
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {2, 4, 6, 8, 10};
    int n = arr.size();

    vector<int> prefix(n);

    // Base case
    prefix[0] = arr[0];

    // Build prefix sum array
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    cout << "Prefix Sum Array:\n";
    for (int i = 0; i < n; i++) {
        cout << prefix[i] << " ";
    }

    return 0;
}
