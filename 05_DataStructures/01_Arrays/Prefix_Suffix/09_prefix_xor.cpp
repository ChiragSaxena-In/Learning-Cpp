/*
    Prefix XOR

    Idea:
    XOR has special properties:
    a ^ a = 0
    a ^ 0 = a

    Range XOR:
    xor(L, R) = prefixXor[R] ^ prefixXor[L - 1]
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {3, 8, 2, 6, 4};
    int n = arr.size();

    vector<int> prefixXor(n);
    prefixXor[0] = arr[0];

    for (int i = 1; i < n; i++) {
        prefixXor[i] = prefixXor[i - 1] ^ arr[i];
    }

    int L = 1, R = 3;

    int ans;
    if (L == 0) ans = prefixXor[R];
    else ans = prefixXor[R] ^ prefixXor[L - 1];

    cout << "Range XOR = " << ans;

    return 0;
}
