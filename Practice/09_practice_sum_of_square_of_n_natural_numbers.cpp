#include <iostream>

// Sum of squares of first N natural numbers

int main() {
    long long int n, result = 0;

    std::cout << "Enter a number to calculate the sum of squares till that number: ";
    std::cin >> n;

    std::cout << "\n";

    // --- Method 1: Using Loop (useful for concept, but slow for large n) ---
    /*
    for (int i = 1; i <= n; i++) {
        result += (i * i);
    }
    std::cout << "Using loop: Sum of squares till " << n << " = " << result << std::endl;
    */

    // --- Method 2: Using Formula ---
    // Formula: n(n + 1)(2n + 1) / 6
    result = (n * (n + 1) * (2 * n + 1)) / 6;

    std::cout << "Using formula: Sum of squares till " << n << " = " << result << std::endl;

    return 0;
}
