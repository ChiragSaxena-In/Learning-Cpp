/*
Concept: Parameters vs Arguments
--------------------------------
Parameter  : Variable in function definition
Argument   : Value passed during function call

Formal Arguments = Parameters
Actual Arguments = Arguments
*/

#include <iostream>
using namespace std;

void display(int x, int y);   // x, y → PARAMETERS (formal arguments)

int main() {
    display(5, 10);           // 5, 10 → ARGUMENTS (actual arguments)
    return 0;
}

void display(int x, int y) {
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}
