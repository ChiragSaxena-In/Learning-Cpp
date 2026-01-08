/*
    insert() and erase()
    Note: both are O(n)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};

    v.insert(v.begin() + 1, 10); // insert at index 1
    v.erase(v.begin());          // erase first element

    for (int x : v) cout << x << " ";

    return 0;
}
