/*
    Sorting and reversing vectors
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {5, 3, 1, 4, 2};

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    for (int x : v) cout << x << " ";

    return 0;
}
