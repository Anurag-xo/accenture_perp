#include <bits/stdc++.h>
using namespace std;

string helper(int n) {

  if(n == 0) return "0";
  if(n == 1) return "1";

  string ans = "";

  while(n > 0) {
    if( n & 1) {
      ans = '1' + ans;
    } else {
      ans = '0' + ans;
    }
    n = n >> 1;
  }
  return ans;
}

int main() {
  int n; cin >> n;
  cout << helper(n) << endl;
  return 0;
}
