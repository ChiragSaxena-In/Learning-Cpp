/*
Concept: Function Declaration vs Definition
-------------------------------------------
Declaration tells the compiler about the function.
Definition contains the actual logic.
*/

#include <iostream>
using namespace std;

int add(int a, int b);   // declaration

int main() {
    cout << "Sum = " << add(4, 6) << endl;
    return 0;
}

int add(int a, int b) { // definition
    return a + b;
}
