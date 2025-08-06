#include <iostream>

/*
---------------------------
This program demonstrates the usage of the SWITCH-CASE statement in C++.

→ switch is used when:
   - You have multiple fixed choices for a variable (usually an integer or char).
   - Works as a cleaner alternative to multiple if-else conditions.

Syntax:
---------
switch (expression) {
    case value1:
        // code
        break;
    case value2:
        // code
        break;
    ...
    default:
        // code (when no case matches)
}
*/

int main() {

    // Example 1: Simple calculator using switch-case
    int a, b;
    char op;

    std::cout << "Example 1: Simple Calculator (+ - * /)\n";
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    std::cout << "Enter operator (+ - * /): ";
    std::cin >> op;

    switch (op) {
        case '+':
            std::cout << "Result = " << a + b << "\n";
            break;
        case '-':
            std::cout << "Result = " << a - b << "\n";
            break;
        case '*':
            std::cout << "Result = " << a * b << "\n";
            break;
        case '/':
            if (b != 0)
                std::cout << "Result = " << a / b << "\n";
            else
                std::cout << "Error: Division by zero!\n";
            break;
        default:
            std::cout << "Invalid operator.\n";
    }

    std::cout << "\n";

    // Example 2: Day of the week using switch-case
    int day;
    std::cout << "Example 2: Day of the Week\n";
    std::cout << "Enter day number (1-7): ";
    std::cin >> day;

    switch (day) {
        case 1:
            std::cout << "Monday\n";
            break;
        case 2:
            std::cout << "Tuesday\n";
            break;
        case 3:
            std::cout << "Wednesday\n";
            break;
        case 4:
            std::cout << "Thursday\n";
            break;
        case 5:
            std::cout << "Friday\n";
            break;
        case 6:
            std::cout << "Saturday\n";
            break;
        case 7:
            std::cout << "Sunday\n";
            break;
        default:
            std::cout << "Invalid day number!\n";
    }

    return 0;
}
