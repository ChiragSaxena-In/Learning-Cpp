/*
    Prefix + Suffix Combined

    Idea:
    Prefix holds left-side information
    Suffix holds right-side information

    Very useful when:
    - excluding current index
    - splitting array
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {3, 1, 4, 2};
    int n = arr.size();

    vector<int> prefix(n), suffix(n);

    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    suffix[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] + arr[i];
    }

    cout << "Left Sum (Prefix) and Right Sum (Suffix):\n";
    for (int i = 0; i < n; i++) {
        int left = (i == 0) ? 0 : prefix[i - 1];
        int right = (i == n - 1) ? 0 : suffix[i + 1];
        cout << "Index " << i << " -> Left: " << left << ", Right: " << right << "\n";
    }

    return 0;
}
