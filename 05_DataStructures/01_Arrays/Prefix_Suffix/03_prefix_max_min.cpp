/*
    Prefix Max and Prefix Min

    Idea:
    prefixMax[i] = maximum element from 0 to i
    prefixMin[i] = minimum element from 0 to i

    Used in:
    - Trapping Rain Water
    - Stock problems
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {5, 2, 9, 1, 7};
    int n = arr.size();

    vector<int> prefixMax(n), prefixMin(n);

    prefixMax[0] = arr[0];
    prefixMin[0] = arr[0];

    for (int i = 1; i < n; i++) {
        prefixMax[i] = max(prefixMax[i - 1], arr[i]);
        prefixMin[i] = min(prefixMin[i - 1], arr[i]);
    }

    cout << "Prefix Max:\n";
    for (int x : prefixMax) cout << x << " ";

    cout << "\nPrefix Min:\n";
    for (int x : prefixMin) cout << x << " ";

    return 0;
}
