/*
LeetCode: Container With Most Water
Opposite direction pointers
*/


#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int height[] = {1,8,6,2,5,4,8,3,7};
int n = 9;


int start = 0, end = n - 1;
int maxArea = 0;


while (start < end) {
int width = end - start;
int h = min(height[start], height[end]);
maxArea = max(maxArea, width * h);


if (height[start] < height[end]) start++;
else end--;
}


cout << maxArea;
}