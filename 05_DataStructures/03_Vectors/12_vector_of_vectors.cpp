/*
    Vector of vectors (2D dynamic array)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> mat(3, vector<int>(3, 0));

    mat[1][1] = 5;

    for (auto row : mat) {
        for (int x : row)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}
