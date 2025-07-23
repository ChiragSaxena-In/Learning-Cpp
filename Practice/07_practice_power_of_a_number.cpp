#include <iostream>

int main() {
    // This program calculates exponentiation using a loop.
    // It computes: number ^ power (number raised to 'power')

    int number, power;
    int result = 1;

    std::cout << "Enter a number (base): ";
    std::cin >> number;

    std::cout << "Enter the power to raise the number to: ";
    std::cin >> power;

    if (power == 0) {
        // Any number to the power 0 is 1 (except 0^0 is mathematically undefined)
        if (number == 0) {
            std::cout << "0 raised to the power 0 is undefined (commonly treated as 1)." << std::endl;
        } else {
            std::cout << number << " raised to the power 0 is: 1" << std::endl;
        }
    } else {
        for (int i = 1; i <= power; i++) {
            result *= number;
        }
        std::cout << number << " raised to the power " << power << " is: " << result << std::endl;
    }

    return 0;
}
