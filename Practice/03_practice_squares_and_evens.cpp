#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    // ----------- Print squares of all numbers from 1 to n -----------
    cout << "\nSquares from 1 to " << n << ":\n";
    for (int i = 1; i <= n; i++) {
        cout << i << "^2 = " << i * i << endl;
    }

    // ----------- Print all even numbers from 1 to n -----------
    cout << "\nEven numbers from 1 to " << n << ":\n";
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    /* Better method:
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    */

    return 0;
}
