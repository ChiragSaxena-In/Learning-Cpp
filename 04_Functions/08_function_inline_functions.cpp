/*
Concept: Inline Functions
-------------------------
Used for small functions to reduce
function call overhead.
*/

#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    cout << "Square of 6 = " << square(6) << endl;
    return 0;
}
