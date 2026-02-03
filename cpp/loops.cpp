#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: "; // We dont have to type std::cout because of using namespace std
    cin >> n;

    int sumEven = 0, sumOdd = 0, countEven = 0, countOdd = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sumEven += i;
            countEven++;
        } else {
            sumOdd += i;
            countOdd++;
        }
    }

    cout << "1.." << n << "\n";
    cout << "Even count = " << countEven << ", Even sum = " << sumEven << "\n";
    cout << "Odd  count = " << countOdd  << ", Odd  sum = " << sumOdd  << "\n";

    // while loop example: compute factorial
    long long fact = 1; // long long represents 8 byte integer
    int k = n;
    while (k > 1) {
        fact *= k;
        k--;
    }
    cout << n << "! = " << fact << "\n";

    return 0; // in case of unsuccessful termination return non-zero value
}

