/*
==================== TWO POINTERS INTRO ====================
Idea:
- Use two indices instead of nested loops
- Usually applied on arrays / strings


Common Patterns:
1) start & end (opposite direction)
2) slow & fast (same direction)


Time Optimization:
O(n^2) -> O(n)
*/


#include <iostream>
using namespace std;


int main() {
int arr[] = {1, 2, 3, 4, 5};
int start = 0;
int end = 4;


while (start < end) {
cout << arr[start] << " " << arr[end] << endl;
start++;
end--;
}
}