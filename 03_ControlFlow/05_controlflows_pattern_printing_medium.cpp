#include <iostream>

/*
Patterns Covered: For number = 5
*/

int main() {

    int number;
    std::cout << "Enter a number to print the pattern accordingly: ";
    std::cin >> number;

    // ------------------------------------------------------------
    /*
    Desired Output:
    *
    * *
    * * *
    * * * *
    * * * * *
    */

    for (int row = 1; row <= number; row++) {
        for (int col = 1; col <= row; col++) {
            std::cout << "* "; // Number of stars is equal to the current row number
        }
        std::cout << "\n";
    }

    // ------------------------------------------------------------
    /*
    Desired Output:
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    */

    for (int row = 1; row <= number; row++) {
        for (int col = 1; col <= row; col++) {
            std::cout << col << " "; // Number of columns is equal to the current row number
        }
        std::cout << "\n";
    }

    // ------------------------------------------------------------
    /*
    Desired Output:
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
    */

    for (int row = 1; row <= number; row++) {
        for (int col = 1; col <= row; col++) {
            std::cout << row << " "; // Row number is repeated column times
        }
        std::cout << "\n";
    }

    // ------------------------------------------------------------
    /*
    Desired Output:
    1
    2 1
    3 2 1
    4 3 2 1
    5 4 3 2 1
    */

    for (int row = 1; row <= number; row++) {
        for (int col = row; col > 0; col--) {
            std::cout << col << " ";
        }
        std::cout << "\n";
    }

    // ------------------------------------------------------------
    /*
    Desired Output:
    a
    b b
    c c c
    d d d d
    e e e e e
    */

    for (int row = 1; row <= number; row++) {
        char alphabet = 'a' + (row - 1); // To determine which alphabet to print
        for (int col = 1; col <= row; col++) {
            std::cout << alphabet << " ";
        }
        std::cout << "\n";
    }

    // ------------------------------------------------------------
    /*
    Desired Output:
    * * * * *
    * * * *
    * * *
    * *
    *
    */

    for (int row = number; row > 0; row--) {
        for (int col = row; col > 0; col--) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }

    // Alternate Solutions

    for (int row = 1; row <= number; row++) {
        for (int col = number; col > (row - 1); col--) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }

    // OR

    for (int row = 1; row <= number; row++) {
        for (int col = 1; col <= number - (row - 1); col++) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
    
    // OR

    for (int row = number; row > 0; row--) {
        for (int col = 1; col <= row; col++) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }

    // ------------------------------------------------------------
    /*
    Desired Output:
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
    */

    for (int row = number; row > 0; row--) {
        for (int col = 1; col <= row; col++) {
            std::cout << col << " ";
        }
        std::cout << "\n";
    }

    // ------------------------------------------------------------
    /*
    Desired Output:
    5
    5 4
    5 4 3
    5 4 3 2
    5 4 3 2 1
    */

    for (int row = 1; row <= number; row++) {
        for (int col = 1; col <= row; col++) {
            std::cout << number - (col - 1) << " ";
        }
        std::cout << "\n";
    }

    // Alternate Solutions

    for (int row = number; row > 0; row--) {
        for (int col = number; col >= row; col--) {
            std::cout << col << " ";
        }
        std::cout << "\n";
    }

    // OR

    for (int row = 1; row <= number; row++) {
        for (int col = 5; col >= 5 - (row - 1); col--) {
            std::cout << col << " ";
        }
        std::cout << "\n";
    }

    // ------------------------------------------------------------
    /*
    Desired Output:
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    1 2 3 4 5 (Repetition)
    */

    bool repeat = false;
    for (int row = 1; row <= number; row++) {
        for (int col = 1; col <= row; col++) {
            std::cout << col << " ";

            if (row == number && col == number && !repeat) {
                std::cout << "\n";
                for (int i = 1; i <= number; i++) {
                    std::cout << i << " ";
                }
                repeat = true;
            }
        }
        std::cout << "\n";
    }

    // ------------------------------------------------------------
    /*
    Desired Output:
    a
    a b
    a b c
    a b c d
    a b c d e
    */

    for (int row = 1; row <= number; row++) {
        for (int col = 1; col <= row; col++) {
            char alphabet = 'a' + (col - 1);
            std::cout << alphabet << " ";
        }
        std::cout << "\n";
    }

    // OR

    for (int row = 1; row <= number; row++) {
        for (char alphabet = 'a'; alphabet <= 'a' + (row - 1); alphabet++) {
            std::cout << alphabet << " ";
        }
        std::cout << "\n";
    }

    // ------------------------------------------------------------
    /*
    Desired Output:
    10
    10 11
    10 11 12
    10 11 12 13
    10 11 12 13 14
    10 11 12 13 14 15
    */

    for (int row = 1; row <= number; row++) {
        for (int col = 10; col <= 10 + (row - 1); col++) {
            std::cout << col << " ";
        }
        std::cout << "\n";
    }

    // ------------------------------------------------------------
    /*
    Desired Output:
    A B C D E
    A B C D
    A B C
    A B
    A
    */

    for (int row = 1; row <= number; row++) {
        for (char alphabet = 'A'; alphabet <= 'A' + (number - row); alphabet++) {
            std::cout << alphabet << " ";
        }
        std::cout << "\n";
    }

    // OR

    for (int row = number; row > 0; row--) {
        for (char alphabet = 'A'; alphabet <= 'A' + (row - 1); alphabet++) {
            std::cout << alphabet << " ";
        }
        std::cout << "\n";
    }

    return 0;

}
