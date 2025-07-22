#include <iostream>
#include <cctype> // For character handling functions
using namespace std;

int main() {
    char ch;
    cout << "Enter any character: ";
    cin >> ch;

    // isalpha(): checks if ch is an alphabet (A-Z or a-z)
    if (isalpha(ch))
        cout << ch << " is an alphabet.\n";

    // isdigit(): checks if ch is a digit (0-9)
    if (isdigit(ch))
        cout << ch << " is a digit.\n";

    // isalnum(): checks if ch is alphanumeric (A-Z, a-z, 0-9)
    if (isalnum(ch))
        cout << ch << " is alphanumeric.\n";

    // islower(): checks if ch is a lowercase letter (a-z)
    if (islower(ch))
        cout << ch << " is lowercase.\n";

    // isupper(): checks if ch is an uppercase letter (A-Z)
    if (isupper(ch))
        cout << ch << " is uppercase.\n";

    // isspace(): checks if ch is a whitespace character (space, tab, newline)
    if (isspace(ch))
        cout << "It's a whitespace character.\n";

    // ispunct(): checks if ch is a punctuation character (!, @, #, etc.)
    if (ispunct(ch))
        cout << ch << " is a punctuation mark.\n";

    // tolower(): converts character to lowercase (only if it's an alphabet)
    cout << "Lowercase version: " << char(tolower(ch)) << endl;

    // toupper(): converts character to uppercase
    cout << "Uppercase version: " << char(toupper(ch)) << endl;

    return 0;
}
