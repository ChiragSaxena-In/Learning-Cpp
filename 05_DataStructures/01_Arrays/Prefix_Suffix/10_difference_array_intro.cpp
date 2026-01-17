/*
    Difference Array (Intro)

    Idea:
    Efficient range updates using prefix sum later.

    Update range [L, R] by value x:
    diff[L] += x
    diff[R + 1] -= x
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 5;
    vector<int> diff(n + 1, 0);

    // Range update: add 3 to range [1, 3]
    diff[1] += 3;
    diff[4] -= 3;

    vector<int> arr(n);
    arr[0] = diff[0];

    for (int i = 1; i < n; i++) {
        arr[i] = arr[i - 1] + diff[i];
    }

    cout << "Array after range update:\n";
    for (int x : arr) cout << x << " ";

    return 0;
}
