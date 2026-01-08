/*
    Different ways to declare and initialize vectors
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> a;               // empty
    vector<int> b(5);            // size 5, values = 0
    vector<int> c(5, 10);        // size 5, all values = 10
    vector<int> d = {1, 2, 3};   // initializer list

    cout << "Vector c: ";
    for (int x : c) cout << x << " ";

    return 0;
}
