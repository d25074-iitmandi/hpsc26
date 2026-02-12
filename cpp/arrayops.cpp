#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int N = 8;
    int a[N] = {5, 1, 9, 2, 7, 3, 8, 4};

    int mn = a[0], mx = a[0], sum = 0;
    for (int i = 0; i < N; i++) {
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
        sum += a[i];
    }

    double avg = static_cast<double>(sum) / N; // type casting to double for accurate average

    cout << "Array: ";
    for (int i = 0; i < N; i++) cout << a[i] << " ";
    cout << "\nMin=" << mn << " Max=" << mx
         << " Avg=" << fixed << setprecision(2) << avg << "\n";

    // Reverse in-place
    for (int i = 0; i < N / 2; i++) {
        int tmp = a[i];
        a[i] = a[N - 1 - i];
        a[N - 1 - i] = tmp;
    }

    cout << "Reversed: ";
    for (int i = 0; i < N; i++) cout << a[i] << " ";
    cout << "\n";

    return 0;
}

