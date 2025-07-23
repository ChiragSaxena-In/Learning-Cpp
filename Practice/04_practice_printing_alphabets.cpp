#include <iostream>
using namespace std;

int main() {
    // In C++, characters are internally stored as integers using ASCII values.
    // For example, 'A' is 65, 'B' is 66, ..., 'Z' is 90.
    // So we can loop from 'A' to 'Z' just like we do with numbers.

    for (char ch = 'A'; ch <= 'Z'; ch++) {
        cout << ch << " ";
    }

    cout << endl;
    return 0;
}
