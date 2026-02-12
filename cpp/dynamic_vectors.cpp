#include <iostream>
#include <vector>
#include <algorithm> // sort, find
#include <numeric>   // accumulate
using namespace std;

int main() {
    vector<int> v; 

    int n;
    cout << "How many numbers? ";
    cin >> n;

    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }

    cout << "You entered: ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    int total = accumulate(v.begin(), v.end(), 0);
    cout << "Sum = " << total << "\n";

    sort(v.begin(), v.end());
    cout << "Sorted: ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    int key;
    cout << "Search key: ";
    cin >> key;

    auto it = find(v.begin(), v.end(), key);
    if (it != v.end()) cout << "Found at index (sorted) = " << (it - v.begin()) << "\n";
    else cout << "Not found\n";

    return 0;
}

