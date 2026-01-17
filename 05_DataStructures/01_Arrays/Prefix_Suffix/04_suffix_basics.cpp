/*
    Suffix Basics

    Idea:
    Suffix array stores information from index i to n-1.

    suffix[i] = arr[i] + arr[i+1] + ... + arr[n-1]
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();

    vector<int> suffix(n);

    suffix[n - 1] = arr[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] + arr[i];
    }

    cout << "Suffix Sum Array:\n";
    for (int x : suffix) cout << x << " ";

    return 0;
}
