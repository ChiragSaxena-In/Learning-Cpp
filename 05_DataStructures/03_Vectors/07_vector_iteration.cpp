/*
    Different ways to iterate over vector
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4};

    // Index based
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << endl;

    // Range based
    for (int x : v)
        cout << x << " ";

    cout << endl;

    // Iterator
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";

    return 0;
}
