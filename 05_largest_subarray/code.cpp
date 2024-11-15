#include <bits/stdc++.h>
using namespace std;

int max_length(int n, vector<int> arr) {
    unordered_map<int, int> mp;
    mp[0] = -1;

    int prefix_sum = 0;
    int length = 0;

    for (int j = 0; j < n; j++) {
        prefix_sum += (arr[j] == 1 ? 1 : -1);
        if (mp.count(prefix_sum)) {
            int i = mp[prefix_sum];
            length = max(length, j - i);
        } else {
            mp[prefix_sum] = j;
        }
    }
    return length;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array (0 or 1 only): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] != 0 && arr[i] != 1) {
            cout << "Invalid input. Only 0 or 1 are allowed." << endl;
            return 1;
        }
    }

    int result = max_length(n, arr);
    cout << "The maximum length of a subarray with equal 0s and 1s is: " << result << endl;

    return 0;
}
