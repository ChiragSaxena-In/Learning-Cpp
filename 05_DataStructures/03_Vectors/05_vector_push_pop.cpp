/*
    push_back() and pop_back()
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v.pop_back(); // removes last element

    for (int x : v) cout << x << " ";

    return 0;
}
