#include <iostream>
using namespace std;

int main() {
    // This program prints uppercase and lowercase alphabets along with their ASCII values.
    // When a char is used where an int is expected, C++ automatically converts it to its ASCII value.
    // Example: (int)'A' is 65, (int)'a' is 97

    // The '\t' is an escape character that inserts a horizontal tab.
    // It helps align columns neatly by adding spacing similar to pressing the TAB key.
    
    cout << "Uppercase\tASCII\t|\tLowercase\tASCII" << endl;
    cout << "--------------------------------------------------" << endl;

    for (int i = 0; i < 26; i++) {
        char upper = 'A' + i;
        char lower = 'a' + i;
        
        cout << "    " << upper << "\t\t " << (int)upper
             << "\t|\t    " << lower << "\t\t " << (int)lower << endl;
    }

    return 0;
}
