/*
    Copying and swapping vectors
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3};
    vector<int> b = a; // copy

    vector<int> c = {10, 20};
    swap(a, c);

    for (int x : a) cout << x << " ";

    return 0;
}
