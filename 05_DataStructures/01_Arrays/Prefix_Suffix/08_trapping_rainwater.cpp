/*
    Trapping Rain Water

    Idea:
    Water at index i =
    min(leftMax[i], rightMax[i]) - height[i]

    Uses Prefix Max + Suffix Max
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> height = {4, 2, 0, 3, 2, 5};
    int n = height.size();

    vector<int> leftMax(n), rightMax(n);

    leftMax[0] = height[0];
    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i - 1], height[i]);
    }

    rightMax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i + 1], height[i]);
    }

    int water = 0;
    for (int i = 0; i < n; i++) {
        water += min(leftMax[i], rightMax[i]) - height[i];
    }

    cout << "Total Trapped Water = " << water;

    return 0;
}
