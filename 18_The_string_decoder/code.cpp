#include <bits/stdc++.h>
using namespace std;

stirng helper(string s) {

  if(s.length() == 0) return "";

  int count = 0;
  string ans = "";

  for(int i = 0; i < s.length(); i++) {
    if(s[i] == '1') {
      count++;
    } else {
      if(count > 0) {
        ans += (char)(64 + count);
        count = 0;
      }
    }
  }
  if(count > 0) {
      ans += (char)(64 + count);
  }
  return ans;
}
