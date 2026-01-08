/*
    Taking input and printing vector elements
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int n, x;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
