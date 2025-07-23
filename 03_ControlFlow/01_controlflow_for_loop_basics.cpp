#include <iostream>
using namespace std;

int main() {

    // ----------- Basic Counting: 1 to 5 -----------
    for (int i = 1; i <= 5; i++) {
        cout << "i = " << i << endl;
    }

    // ----------- Counting Down: 5 to 1 -----------
    for (int i = 5; i >= 1; i--) {
        cout << "Countdown: " << i << endl;
    }

    // ----------- Custom Step: Even numbers from 2 to 10 -----------
    for (int i = 2; i <= 10; i += 2) {
        cout << "Even: " << i << endl;
    }

    // ----------- Using break (exit loop early) -----------
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            cout << "Breaking the loop at i = " << i << endl;
            break;
        }
        cout << "i = " << i << endl;
    }

    // ----------- Using continue (skip current iteration) -----------
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            cout << "Skipping i = " << i << endl;
            continue;
        }
        cout << "i = " << i << endl;
    }

    // ----------- (Commented) Infinite Loop Example -----------
    /*
    for (;;) {
        // This is an infinite loop.
        // Be careful! Uncommenting this will loop forever.
    }
    */

    return 0; // Tells the OS that the program ended successfully
}
