/*
Remove duplicates from sorted array
Same-direction two pointers
*/


#include <iostream>
using namespace std;


int main() {
int arr[] = {1, 1, 2, 2, 3, 4, 4};
int n = 7;


int i = 0;
for (int j = 1; j < n; j++) {
if (arr[j] != arr[i]) {
i++;
arr[i] = arr[j];
}
}


for (int k = 0; k <= i; k++) cout << arr[k] << " ";
}