#include <iostream>
#include <vector>
using namespace std;

int main() {
    // A is 2x3, B is 3x2 => product P is 2x2
    vector<vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6}
    };
    vector<vector<int>> B = {
        {7,  8},
        {9, 10},
        {11,12}
    };

    int rA = (int)A.size(), cA = (int)A[0].size();
    int rB = (int)B.size(), cB = (int)B[0].size();

    if (cA != rB) {
        cout << "Incompatible sizes for multiplication!\n";
        return 0;
    }

    vector<vector<int>> P(rA, vector<int>(cB, 0));

    for (int i = 0; i < rA; i++) {
        for (int j = 0; j < cB; j++) {
            for (int k = 0; k < cA; k++) {
                P[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Product matrix:\n";
    for (int i = 0; i < rA; i++) {
        for (int j = 0; j < cB; j++) cout << P[i][j] << " ";
        cout << "\n";
    }

    return 0;
}

