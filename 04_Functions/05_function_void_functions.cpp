/*
Concept: Void Functions
-----------------------
Void functions do not return any value.
*/

#include <iostream>
using namespace std;

void printLine();

int main() {
    printLine();
    cout << "Void function example" << endl;
    printLine();
    return 0;
}

void printLine() {
    cout << "----------------------" << endl;
}
