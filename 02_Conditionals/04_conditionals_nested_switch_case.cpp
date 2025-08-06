#include <iostream>

/*
---------------------------
This program demonstrates how to use NESTED SWITCH-CASE in C++.

→ Nested switch is used when:
   - You want to check another set of choices **within a main case**.
   - This helps in building menus or more specific decision branches.

Syntax:
---------
switch (outer_expression) {
    case value1:
        switch (inner_expression) {
            case inner_value1:
                // code
                break;
            ...
        }
        break;
    ...
}
*/

int main() {

    // Example: University Course Menu
    int courseCategory;
    int courseOption;

    std::cout << "Example: University Course Selector\n";
    std::cout << "1. Programming Courses\n";
    std::cout << "2. Design Courses\n";
    std::cout << "Choose a course category (1-2): ";
    std::cin >> courseCategory;

    switch (courseCategory) {

        case 1:
            std::cout << "\n-- Programming Courses --\n";
            std::cout << "1. C++\n";
            std::cout << "2. Python\n";
            std::cout << "Choose a course (1-2): ";
            std::cin >> courseOption;

            switch (courseOption) {
                case 1:
                    std::cout << "You selected: C++ Programming\n";
                    break;
                case 2:
                    std::cout << "You selected: Python Programming\n";
                    break;
                default:
                    std::cout << "Invalid programming course option.\n";
            }
            break;

        case 2:
            std::cout << "\n-- Design Courses --\n";
            std::cout << "1. UI/UX\n";
            std::cout << "2. Graphic Design\n";
            std::cout << "Choose a course (1-2): ";
            std::cin >> courseOption;

            switch (courseOption) {
                case 1:
                    std::cout << "You selected: UI/UX Design\n";
                    break;
                case 2:
                    std::cout << "You selected: Graphic Design\n";
                    break;
                default:
                    std::cout << "Invalid design course option.\n";
            }
            break;

        default:
            std::cout << "Invalid course category.\n";
    }

    return 0;
}
