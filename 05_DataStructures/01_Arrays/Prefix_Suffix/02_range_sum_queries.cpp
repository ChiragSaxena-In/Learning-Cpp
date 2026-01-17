/*
    Range Sum Query using Prefix Sum

    Idea:
    Once prefix sum is built,
    sum of range [L, R] can be answered in O(1).

    Formula:
    sum(L, R) = prefix[R] - prefix[L - 1]
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int n = arr.size();

    vector<int> prefix(n);
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    int L = 1, R = 4;

    int rangeSum;
    if (L == 0) {
        rangeSum = prefix[R];
    } else {
        rangeSum = prefix[R] - prefix[L - 1];
    }

    cout << "Range Sum [" << L << ", " << R << "] = " << rangeSum;

    return 0;
}
