/*
    Product of Array Except Self

    Idea:
    Answer at index i =
    (product of elements before i) *
    (product of elements after i)

    Uses Prefix + Suffix
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4};
    int n = arr.size();

    vector<int> prefix(n), suffix(n), result(n);

    prefix[0] = 1;
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * arr[i - 1];
    }

    suffix[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * arr[i + 1];
    }

    for (int i = 0; i < n; i++) {
        result[i] = prefix[i] * suffix[i];
    }

    cout << "Product Except Self:\n";
    for (int x : result) cout << x << " ";

    return 0;
}
