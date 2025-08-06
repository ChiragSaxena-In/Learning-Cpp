#include <iostream>

/*
-----------------------------
This program demonstrates the basic usage of the DO-WHILE loop in C++.

The DO-WHILE loop is used when:
- You want the loop body to run **at least once**, no matter what.
- The condition is checked **after** the loop body runs.

Syntax:
---------
do {
    // code to repeat
} while (condition);
*/

int main() {

    // Example 1: Print numbers from 1 to 5 using do-while loop
    int i = 1;

    std::cout << "Example 1: Print numbers from 1 to 5:\n";
    do {
        std::cout << i << " ";
        i++;
    } while (i <= 5);

    std::cout << "\n\n";

    // Example 2: A menu that keeps repeating until user chooses to exit
    int choice;

    std::cout << "Example 2: Simple menu using do-while:\n";
    do {
        std::cout << "\n--- Menu ---\n";
        std::cout << "1. Say Hello\n";
        std::cout << "2. Say Goodbye\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice (1-3): ";
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "Hello there!\n";
        } else if (choice == 2) {
            std::cout << "Goodbye!\n";
        } else if (choice != 3) {
            std::cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 3); // loop exits

    std::cout << "\nProgram exited.\n";

    return 0;
}
