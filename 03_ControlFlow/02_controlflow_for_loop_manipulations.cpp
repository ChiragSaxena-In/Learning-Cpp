#include <iostream>

/*
Goal: Demonstrate flexible usage of for loops by customizing:
    1. Increment control
    2. Conditional skips
    3. Loop resets
    4. Decrementing patterns

Reminder:
    for (initialization; condition; step) {
        // Loop Body
    }

    All 3 parts (init, condition, step) are optional in C++.

    Skipping the "step" part gives full control from inside the loop body.
*/

int main() {

    std::cout << "----- Custom Increment (Even numbers from 2 to 10) -----\n";
    for (int i = 2; i <= 10;) { // Skipping increment in header
        std::cout << i << " ";
        i += 2; // Custom step inside
    }

    std::cout << "\n\n----- Skip Increment (Repeat 3 infinitely until 5) -----\n";
    for (int i = 1; i <= 5;) {
        std::cout << i << " ";
        if (i == 3) {
            ; // Do nothing; i not incremented, loop stays on 3
        } else {
            i++; // Only increment otherwise
        }
    }

    std::cout << "\n\n----- Repeat 3 Twice -----\n";
    bool repeated = false;
    for (int i = 1; i <= 5;) {
        std::cout << i << " ";
        if (i == 3 && !repeated) {
            repeated = true; // Allow 3 once more
        } else {
            i++;
        }
    }

    std::cout << "\n\n----- Reset Loop Variable After 3 (Go back to 1 once) -----\n";
    bool restarted = false;
    for (int i = 1; i <= 5;) {
        std::cout << i << " ";
        if (i == 3 && !restarted) {
            i = 1;        // Reset loop
            restarted = true;
        } else {
            i++;
        }
    }

    std::cout << "\n\n----- Decrementing from 5 to 1, Skip 4 (Method 1) -----\n";
    for (int i = 5; i > 0;) {
        if (i != 4) {
            std::cout << i << " ";
        }
        i--;
    }

    std::cout << "\n\n----- Decrementing from 5 to 1, Skip 4 (Method 2) -----\n";
    for (int i = 5; i > 0;) {
        if (i == 4) {
            i--; // Just skip 4
        } else {
            std::cout << i << " ";
            i--;
        }
    }

    std::cout << std::endl;
}
