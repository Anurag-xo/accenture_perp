#include <bits/stdc++.h>
using namespace std;

int factorail(int n) {
  int ans = 1;
  for(int i = 1; i <= n; i++) ans = ans * i;
  return ans;
}

int helper(string s) {

  if(s.length() == 0) return 0;

  unorderd_map<char, bool> mp;
  mp['A'] = true;
  mp['E'] = true;
  mp['I'] = true;
  mp['O'] = true;
  mp['U'] = true;
  mp['a'] = true;
  mp['e'] = true;
  mp['i'] = true;
  mp['o'] = true;
  mp['u'] = true;

  int count = 0;

  for(int i = 0; i < s.length(); i++) {
    if(!mp.count(s[i])) count++;
  }
  if(count == 0) return 0;

  return factorial(count);
}
