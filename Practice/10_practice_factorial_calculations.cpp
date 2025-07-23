#include <iostream>

// Factorial using for loop with 0! handled explicitly

int main() {
    int n;
    long long int factorial = 1;

    std::cout << "Enter a non-negative number to find its factorial: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else if (n == 0) {
        // By definition, 0! = 1
        std::cout << "Factorial of 0 is: 1" << std::endl;
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        std::cout << "Factorial of " << n << " is: " << factorial << std::endl;
    }

    return 0;
}
