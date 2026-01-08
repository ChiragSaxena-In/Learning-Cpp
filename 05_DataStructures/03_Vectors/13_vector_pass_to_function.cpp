/*
    Passing vector to functions
*/

#include <bits/stdc++.h>
using namespace std;

void printVector(const vector<int>& v) {
    for (int x : v) cout << x << " ";
}

int main() {
    vector<int> v = {1, 2, 3};
    printVector(v);
    return 0;
}
