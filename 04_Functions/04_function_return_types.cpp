/*
Concept: Return Types
---------------------
Functions can return values using return keyword.
*/

#include <iostream>
using namespace std;

int multiply(int a, int b);

int main() {
    int result = multiply(3, 4);
    cout << "Result = " << result << endl;
    return 0;
}

int multiply(int a, int b) {
    return a * b;
}
