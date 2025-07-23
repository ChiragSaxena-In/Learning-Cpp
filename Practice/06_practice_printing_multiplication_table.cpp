#include <iostream>

int main() {
    // This program prints the multiplication table of a number entered by the user.
    
    int number;
    
    // Prompt the user to enter a number
    std::cout << "Enter a number to print its multiplication table: ";
    std::cin >> number;

    // Loop from 1 to 10 and print number × i = result
    for (int i = 1; i <= 10; i++) {
        std::cout << number << " x " << i << " = " << number * i << std::endl;
    }

    return 0;
}
