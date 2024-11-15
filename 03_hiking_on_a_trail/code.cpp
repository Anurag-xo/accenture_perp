#include <iostream>
#include <vector>
using namespace std;

int peakElement(int n, vector<int> v) {
    if (n == 0) return 0;
    if (n == 1) return v[0];

    if (v[0] > v[1]) {     // Descending array
        return v[0];
    }

    if (v[n - 1] > v[n - 2]) {  // Ascending array
        return v[n - 1];
    }

    for (int i = 1; i < n - 1; i++) {
        if (v[i] > v[i - 1] && v[i] > v[i + 1]) return v[i];
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int result = peakElement(n, v);
    if (result != -1) {
        cout << "Peak Element: " << result << endl;
    } else {
        cout << "No peak element found" << endl;
    }

    return 0;
}
