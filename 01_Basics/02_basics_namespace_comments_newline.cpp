#include <iostream> // Include the input-output stream library

// This is a single-line comment

/*
   This is a multi-line comment.
   You can use it to explain blocks of code.
*/

int main() {

    // ----------- Using std:: prefix (without using namespace std) -----------
    std::cout << "Hello from std::cout using endl!" << std::endl;
    std::cout << "This is another line using \\n.\n";

    // Explanation:
    // Without 'using namespace std;', we must prefix standard library items like cout and endl with 'std::'.
    // \n just adds a newline. It's faster because it doesn't flush the output buffer.
    // endl also adds a newline AND flushes the buffer, forcing output to appear immediately.

    // ----------- Now we use 'using namespace std;' -----------
    using namespace std;

    cout << "Now we're using 'using namespace std;'" << endl;
    cout << "So we can write cout and endl directly without std:: prefix.\n";
    
    // 'using namespace std;' brings everything from the standard namespace into current scope,
    // so we don't have to write std:: before cout, cin, endl, etc.

    // ----------- cout does NOT auto-newline like Python's print() -----------
    cout << "This is printed on the same line. ";
    cout << "See? No newline unless we add \\n or endl." << endl;

    // In C++, cout does NOT add a newline automatically like Python's print().
    // You must use \n or endl explicitly if you want the output to go to the next line.

    // return 0; tells the operating system that the program ran successfully.
    return 0;
}
