/*
Concept: Function Basics
------------------------
A function is a reusable block of code
that performs a specific task.
*/

#include <iostream>
using namespace std;

void greet();   // function declaration

int main() {
    greet();    // function call
    return 0;
}

void greet() {  // function definition
    cout << "Hello! Learning functions in C++." << endl;
}
