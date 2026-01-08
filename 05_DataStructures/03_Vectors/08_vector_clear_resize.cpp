/*
    clear() vs resize()
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4};

    v.resize(6, 100); // adds two elements of value 100

    v.clear(); // removes all elements (capacity remains)

    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    return 0;
}
