#include <iostream>
#include <cctype> // Required for tolower()
using namespace std;

int main() {
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;

    // Convert to lowercase to make it case-insensitive
    ch = tolower(ch);

    // Check if it's an alphabet
    if (isalpha(ch)) { // or: if ((ch >= 'a' && ch <= 'z')) {
        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cout << ch << " is a vowel." << endl;
        } else {
            cout << ch << " is a consonant." << endl;
        }
    } else {
        cout << "That's not a valid alphabet!" << endl;
    }

    return 0;
}
