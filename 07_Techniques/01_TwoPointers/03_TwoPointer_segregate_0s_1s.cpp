/*
Problem:
Segregate 0s and 1s in an array


Logic:
- Move start if 0
- Move end if 1
- Swap otherwise
*/


#include <iostream>
using namespace std;


int main() {
int arr[] = {0, 1, 1, 0, 1, 0};
int n = 6;


int start = 0, end = n - 1;


while (start < end) {
if (arr[start] == 0) start++;
else if (arr[end] == 1) end--;
else swap(arr[start], arr[end]);
}


for (int i = 0; i < n; i++) cout << arr[i] << " ";
}