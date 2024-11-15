#include <bits/stdc++.h>
using namespace std;

string repeatString(string str, int n) {
    string ans = "";
    for (int i = 0; i < n; i++) {
        ans += str;
    }
    return ans;
}

int main() {
    string str;
    int n;

    // Input the string
    cout << "Enter the string: ";
    cin >> str;

    // Input the number of repetitions
    cout << "Enter the number of repetitions: ";
    cin >> n;

    // Call the repeatString function and print the result
    string result = repeatString(str, n);
    cout << "Repeated string: " << result << endl;

    return 0;
}

