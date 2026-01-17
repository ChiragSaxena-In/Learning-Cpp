/*
====================================================
Kadane's Algorithm – Maximum Subarray Sum
====================================================

Problem:
Given an integer array, find the maximum sum of a
contiguous subarray.

Example:
Input  : [-2, 1, -3, 4, -1, 2, 1, -5, 4]
Output : 6
Subarray : [4, -1, 2, 1]

----------------------------------------------------
  INTUITION (MOST IMPORTANT PART):
----------------------------------------------------
• While traversing the array, we keep a running sum.
• If at any point the running sum becomes NEGATIVE,
  it will only reduce the sum of any future subarray.
• So we RESET the running sum to 0.
• Meanwhile, we keep tracking the maximum sum seen so far.

  In short:
"If my past sum is hurting my future sum, discard it."

----------------------------------------------------
  Approach (Intuitive Kadane):
----------------------------------------------------
1. Initialize:
   - currSum = 0        (current running sum)
   - maxSum  = INT_MIN (handles all-negative arrays)

2. Traverse the array:
   - Add current element to currSum
   - Update maxSum if currSum is greater
   - If currSum becomes negative → reset it to 0

3. Return maxSum

----------------------------------------------------
 Time Complexity: O(n)
 Space Complexity: O(1)
----------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int>& arr) {
    int currSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {
        currSum += arr[i];

        // Update answer if current sum is better
        maxSum = max(maxSum, currSum);

        // If current sum becomes negative, discard it
        if (currSum < 0) {
            currSum = 0;
        }
    }

    return maxSum;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "Maximum Subarray Sum: "
         << maxSubarraySum(arr) << endl;

    return 0;
}
