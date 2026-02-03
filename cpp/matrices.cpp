#include <iostream>
using namespace std;

int main() {
    const int R = 2, C = 3;
    int A[R][C] = {{1, 2, 3},
                  {4, 5, 6}};
    int B[R][C] = {{6, 5, 4},
                  {3, 2, 1}};
    int S[R][C];

    // Matrix addition
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            S[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Sum matrix:\n";
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) cout << S[i][j] << " ";
        cout << "\n";
    }

    // Transpose of A (C x R)
    cout << "Transpose of A:\n";
    for (int j = 0; j < C; j++) {
        for (int i = 0; i < R; i++) cout << A[i][j] << " ";
        cout << "\n";
    }

    return 0;
}

