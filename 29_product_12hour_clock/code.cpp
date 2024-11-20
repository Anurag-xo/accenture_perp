#include <bits/stdc++.h>
using namespace std;

int main() {
  int num1;
  int num2;

  cin >> num1;
  cin >> num2;

  int product = num1 * num2;
  cout << product % 12 << endl;
  return 0;
}
