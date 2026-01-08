/*
    File: 01_vector_intro.cpp
    Topic: Introduction to Vector

    Idea:
    - vector is a dynamic array
    - size can change at runtime
    - stored in contiguous memory (like array)

    Why vector?
    - No fixed size like arrays
    - Built-in functions (push, pop, resize)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;   // empty vector

    cout << "Initial size: " << v.size() << endl;
    cout << "Initial capacity: " << v.capacity() << endl;

    return 0;
}
