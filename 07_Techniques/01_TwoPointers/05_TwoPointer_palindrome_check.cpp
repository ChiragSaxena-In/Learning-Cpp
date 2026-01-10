/*
Check if string is palindrome using two pointers
*/


#include <iostream>
using namespace std;


int main() {
string s = "level";
int start = 0, end = s.length() - 1;


while (start < end) {
if (s[start] != s[end]) {
cout << "Not Palindrome";
return 0;
}
start++;
end--;
}


cout << "Palindrome";
}