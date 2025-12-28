/*
Concept: Call by Value
---------------------
A copy of value is passed to function.
Original variable remains unchanged.
*/

#include <iostream>
using namespace std;

void modify(int x);

int main() {
    int num = 10;
    modify(num);

    cout << "After function call, num = " << num << endl;
    return 0;
}

void modify(int x) {
    x = x + 5;
    cout << "Inside function, x = " << x << endl;
}
