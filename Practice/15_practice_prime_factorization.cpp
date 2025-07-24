#include <iostream>

/*
Goal: Prime Factorization of a given number

Example:
    number = 60
    → Prime factors = 2, 2, 3, 5

Logic:
    - Start dividing number by 2
    - If divisible, divide and print 2
    - If not, increment divisor and try again
    - Stop when number becomes 1
*/

int main() {

    int number;

    std::cout << "Enter a number to find its prime factorization: ";
    std::cin >> number;

    if (number < 2) {
        std::cout << "Enter a number greater than or equal to 2.\n";
        return 0;
    }

    std::cout << "Prime factors of " << number << " are: ";

    bool first = true; // To track if we're printing the first factor

    for (int i = 2; number > 1;) {
        if (number % i == 0) {
            if (!first) std::cout << ", "; // Add comma only if it's not the first
            std::cout << i;
            number /= i;
            first = false; // Now first is done, future ones will get commas
        } else {
            i++;
        }
    }

    std::cout << std::endl;
    return 0;
}
