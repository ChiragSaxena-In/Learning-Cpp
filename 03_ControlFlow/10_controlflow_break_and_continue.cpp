#include <iostream>

/*
--------------------------
This program demonstrates the usage of 'break' and 'continue' in loops.

→ break:
  - Immediately exits the loop (no further iterations).
  - Useful when you want to stop loop based on a condition.

→ continue:
  - Skips the current iteration and moves to the next.
  - Useful when you want to skip certain values but continue looping.
*/

int main() {

    // Example 1: Using 'break' in a loop
    std::cout << "Example 1: Using break - Stop printing at number 4\n";
    for (int i = 1; i <= 10; i++) {
        if (i == 4) {
            std::cout << "Encountered 4, breaking loop.\n";
            break; // Exit the loop when i is 4
        }
        std::cout << i << " ";
    }

    std::cout << "\n\n";

    // Example 2: Using 'continue' to skip a number
    std::cout << "Example 2: Using continue - Skip printing 5\n";
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            std::cout << "(Skipping 5) ";
            continue; // Skip printing 5
        }
        std::cout << i << " ";
    }

    std::cout << "\n\n";

    // Example 3: Sum of positive numbers until a negative number is entered (using break)
    int num, sum = 0;

    std::cout << "Example 3: Enter positive numbers (negative to stop):\n";
    while (true) {
        std::cout << "Enter number: ";
        std::cin >> num;

        if (num < 0) {
            std::cout << "Negative number entered. Stopping input.\n";
            break;
        }

        sum += num;
    }

    std::cout << "Total sum of positive numbers = " << sum << "\n";

    return 0;
}
