#include <iostream>

// For loop concept with sum of natural numbers

int main() {
    long long int end_num, result = 0;  // long long to handle large input like 1,000,000,000
    int i;

    std::cout << "Enter an ending number to calculate the sum of all natural numbers till that number: ";
    std::cin >> end_num;

    std::cout << "\n";

    // --- Method 1: Using Loop (inefficient for large n) ---
    /*
    for (i = 1; i <= end_num; i++) {
        result = result + i;
    }
    std::cout << "Using loop: The sum is " << result << std::endl;
    */

    // --- Method 2: Using formula (efficient and fast) ---
    // Sum of first n natural numbers = n(n + 1) / 2
    result = (end_num * (end_num + 1)) / 2;

    std::cout << "Using formula: The sum of all natural numbers till " << end_num << " is " << result << std::endl;

    return 0;
}
