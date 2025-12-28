/*
Concept: Default Arguments
--------------------------
If argument is not passed,
default value is used.
*/

#include <iostream>
using namespace std;

void display(int a, int b = 10);

int main() {
    display(5);
    display(5, 20);
    return 0;
}

void display(int a, int b) {
    cout << "a = " << a << ", b = " << b << endl;
}
