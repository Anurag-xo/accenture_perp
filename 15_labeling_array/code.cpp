#include <bits/stdc++.h>
using namespace std;

string helper(vector<int> v, int n) {
  
  if(n == 0) return "";

  string ans = "";

  for(int i = 0; i < n; i++) {
    if(v[i] % 2 == 0) {
      ans += "Even";
    } else {
      ans += "Odd";
    }
  }
  return ans;
}
