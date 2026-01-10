/*
Problem:
Find a pair with given sum in a sorted array


Brute Force: O(n^2)
Two Pointers: O(n)
*/


#include <iostream>
using namespace std;


int main() {
int arr[] = {1, 2, 4, 7, 11, 15};
int n = 6, target = 15;


int start = 0, end = n - 1;


while (start < end) {
int sum = arr[start] + arr[end];


if (sum == target) {
cout << "Pair found: " << arr[start] << ", " << arr[end];
return 0;
}
else if (sum < target) start++;
else end--;
}


cout << "No pair found";
}