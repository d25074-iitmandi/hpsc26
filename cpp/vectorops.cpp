#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> a = {1, 2, 3};
    vector<double> b = {4, 5, 6};

    if (a.size() != b.size()) {
        cout << "Size mismatch!\n";
        return 0;
    }

    vector<double> c(a.size());
    double dot = 0.0;

    for (size_t i = 0; i < a.size(); i++) {
        c[i] = a[i] + b[i];
        dot += a[i] * b[i];
    }

    cout << "a + b = ";
    for (double x : c) cout << x << " ";
    cout << "\nDot(a,b) = " << dot << "\n";

    return 0;
}

