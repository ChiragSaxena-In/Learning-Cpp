#include <iostream>

/*
Goal: To print various patterns based on the given number.

Patterns Covered: (for number = 5)
1. Single row of stars
2. Square of stars
3. Square of same row number
4. Square of same column number
5. Reverse column numbers
6. Squares of column numbers
7. Alphabet pattern by row
8. Alphabet pattern by column
9. Continuous counting
*/

int main() {

    int number;

    std::cout << "Enter a number to print patterns accordingly: ";
    std::cin >> number;

    // ------------------------------------------------------------
    // 1. Single Row of Stars
    /*
    Desired Output: * * * * * 
    */
    for (int row = 1; row <= number; row++) {
        std::cout << "* ";
    }
    std::cout << "\n\n";

    // ------------------------------------------------------------
    // 2. Square of Stars
    /*
    Desired Output:
     * * * * *
     * * * * *
     * * * * *
     * * * * *
     * * * * *
    */
    for (int row = 1; row <= number; row++) {
        for (int col = 1; col <= number; col++) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";

    // ------------------------------------------------------------
    // 3. Each Row Same Number (row-wise)
    /*
    Desired Output:
     1 1 1 1 1
     2 2 2 2 2
     3 3 3 3 3
     4 4 4 4 4
     5 5 5 5 5
    */
    for (int row = 1; row <= number; row++) {
        for (int col = 1; col <= number; col++) {
            std::cout << row << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";

    // ------------------------------------------------------------
    // 4. Each Column Same Number (column-wise)
    /*
    Desired Output:
     1 2 3 4 5
     1 2 3 4 5
     1 2 3 4 5
     1 2 3 4 5
     1 2 3 4 5
    */
    for (int row = 1; row <= number; row++) {
        for (int col = 1; col <= number; col++) {
            std::cout << col << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";

    // ------------------------------------------------------------
    // 5. Reverse Column Numbers
    /*
    Desired Output:
     5 4 3 2 1
     5 4 3 2 1
     5 4 3 2 1
     5 4 3 2 1
     5 4 3 2 1
    */
    for (int row = 1; row <= number; row++) {
        for (int col = number; col >= 1; col--) {
            std::cout << col << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";

    // ------------------------------------------------------------
    // 6. Square of Column Numbers
    /*
    Desired Output:
     1 4 9 16 25
     1 4 9 16 25
     1 4 9 16 25
     1 4 9 16 25
     1 4 9 16 25
    */
    for (int row = 1; row <= number; row++) {
        for (int col = 1; col <= number; col++) {
            std::cout << col * col << " "; // (col * col * col) for cube
        }
        std::cout << "\n";
    }
    std::cout << "\n";

    // ------------------------------------------------------------
    // 7. Alphabet Pattern by Row
    /*
    Desired Output:
     a a a a a
     b b b b b
     c c c c c
     d d d d d
     e e e e e

     1 -> a
     2 -> b
     3 -> c
     4 -> d
     5 -> e

     pattern: alphabet = 'a' + (row - 1)
    */
    for (int row = 1; row <= number; row++) {
        char alphabet = 'a' + (row - 1); // 'a' = 97, so 'a' + 1 = 98 = 'b'
        for (int col = 1; col <= number; col++) {
            std::cout << alphabet << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";

    // ------------------------------------------------------------
    // 8. Alphabet Pattern by Column
    /*
    Desired Output:
     a b c d e
     a b c d e
     a b c d e
     a b c d e
     a b c d e

     pattern: alphabet = 'a' + (col - 1)
    */
    for (int row = 1; row <= number; row++) {
        for (int col = 1; col <= number; col++) {
            char alphabet = 'a' + (col - 1);
            std::cout << alphabet << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";

    // ------------------------------------------------------------
    // 9. Continuous Counting in Square Grid
    /*
    Desired Output:
     1 2 3 4 5
     6 7 8 9 10
     11 12 13 14 15
     16 17 18 19 20
     21 22 23 24 25

     pattern: display_number = ((row - 1) * 5) + col
    */
    for (int row = 1; row <= number; row++) {
        for (int col = 1; col <= number; col++) {
            int display_number = ((row - 1) * number) + col;
            std::cout << display_number << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
