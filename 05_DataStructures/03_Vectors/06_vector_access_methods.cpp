/*
    Accessing elements in vector
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    cout << v[0] << endl;        // no bounds check
    cout << v.at(1) << endl;     // safe access

    cout << "Front: " << v.front() << endl;
    cout << "Back: " << v.back() << endl;

    return 0;
}
