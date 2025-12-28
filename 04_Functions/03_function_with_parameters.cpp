/*
Concept: Function Parameters
----------------------------
Parameters receive values from function calls.
*/

#include <iostream>
using namespace std;

void showNumber(int num);

int main() {
    showNumber(10);
    showNumber(25);
    return 0;
}

void showNumber(int num) {
    cout << "Number = " << num << endl;
}
